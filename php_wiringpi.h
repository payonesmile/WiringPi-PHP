/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.7
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_WIRINGPI_H
#define PHP_WIRINGPI_H

extern zend_module_entry wiringpi_module_entry;
#define phpext_wiringpi_ptr &wiringpi_module_entry

#ifdef PHP_WIN32
# define PHP_WIRINGPI_API __declspec(dllexport)
#else
# define PHP_WIRINGPI_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(wiringpi);
PHP_MSHUTDOWN_FUNCTION(wiringpi);
PHP_RINIT_FUNCTION(wiringpi);
PHP_RSHUTDOWN_FUNCTION(wiringpi);
PHP_MINFO_FUNCTION(wiringpi);

ZEND_NAMED_FUNCTION(_wrap_wiringPiSetup);
ZEND_NAMED_FUNCTION(_wrap_wiringPiSetupSys);
ZEND_NAMED_FUNCTION(_wrap_wiringPiSetupGpio);
ZEND_NAMED_FUNCTION(_wrap_pullUpDnControl);
ZEND_NAMED_FUNCTION(_wrap_pinMode);
ZEND_NAMED_FUNCTION(_wrap_digitalWrite);
ZEND_NAMED_FUNCTION(_wrap_pwmWrite);
ZEND_NAMED_FUNCTION(_wrap_digitalRead);
ZEND_NAMED_FUNCTION(_wrap_shiftOut);
ZEND_NAMED_FUNCTION(_wrap_shiftIn);
ZEND_NAMED_FUNCTION(_wrap_delay);
ZEND_NAMED_FUNCTION(_wrap_delayMicroseconds);
ZEND_NAMED_FUNCTION(_wrap_millis);
ZEND_NAMED_FUNCTION(_wrap_serialOpen);
ZEND_NAMED_FUNCTION(_wrap_serialClose);
ZEND_NAMED_FUNCTION(_wrap_serialPutchar);
ZEND_NAMED_FUNCTION(_wrap_serialPuts);
ZEND_NAMED_FUNCTION(_wrap_serialDataAvail);
ZEND_NAMED_FUNCTION(_wrap_serialGetchar);
ZEND_NAMED_FUNCTION(_wrap_serialPrintf);
#endif /* PHP_WIRINGPI_H */
