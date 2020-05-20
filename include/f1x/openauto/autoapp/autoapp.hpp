//
// Created by tim on 5/20/20.
//

#ifndef OPENAUTO_INCLUDE_F1X_OPENAUTO_AUTOAPP_AUTOAPP_HPP_
#define OPENAUTO_INCLUDE_F1X_OPENAUTO_AUTOAPP_AUTOAPP_HPP_


#include <thread>
#include <QApplication>
#include <QDesktopWidget>
#include <f1x/aasdk/USB/USBHub.hpp>
#include <f1x/aasdk/USB/ConnectedAccessoriesEnumerator.hpp>
#include <f1x/aasdk/USB/AccessoryModeQueryChain.hpp>
#include <f1x/aasdk/USB/AccessoryModeQueryChainFactory.hpp>
#include <f1x/aasdk/USB/AccessoryModeQueryFactory.hpp>
#include <f1x/aasdk/TCP/TCPWrapper.hpp>
#include <f1x/openauto/autoapp/App.hpp>
#include <f1x/openauto/autoapp/Configuration/IConfiguration.hpp>
#include <f1x/openauto/autoapp/Configuration/RecentAddressesList.hpp>
#include <f1x/openauto/autoapp/Service/AndroidAutoEntityFactory.hpp>
#include <f1x/openauto/autoapp/Service/ServiceFactory.hpp>
#include <f1x/openauto/autoapp/Configuration/Configuration.hpp>
#include <f1x/openauto/autoapp/UI/MainWindow.hpp>
#include <f1x/openauto/autoapp/UI/SettingsWindow.hpp>
#include <f1x/openauto/autoapp/UI/ConnectDialog.hpp>
#include <f1x/openauto/autoapp/UI/WarningDialog.hpp>
#include <f1x/openauto/autoapp/UI/UpdateDialog.hpp>
#include <f1x/openauto/Common/Log.hpp>

namespace aasdk = f1x::aasdk;
namespace autoapp = f1x::openauto::autoapp;
using ThreadPool = std::vector<std::thread>;

void startUSBWorkers(boost::asio::io_service& ioService, libusb_context*
usbContext, ThreadPool& threadPool);

void startIOServiceWorkers(boost::asio::io_service& ioService, ThreadPool&
threadPool);

int runAutoApp(int argc, char* argv[]);

#endif //OPENAUTO_INCLUDE_F1X_OPENAUTO_AUTOAPP_AUTOAPP_HPP_
