#!/bin/bash

export MESOS_HOME_DIR="$HOME/src/mesos"

#echo $MESOS_HOME_DIR

COMPILER="g++"
LP_THIRD_PARTY="$MESOS_HOME_DIR/build/3rdparty/libprocess/3rdparty"

HEADER_FILES=" -I $MESOS_HOME_DIR/include -I $MESOS_HOME_DIR/src -I $MESOS_HOME_DIR/build/src -I $MESOS_HOME_DIR/3rdparty/libprocess/include -I $LP_THIRD_PARTY/boost-1.53.0 -I $LP_THIRD_PARTY/glog-0.3.3/src -I $LP_THIRD_PARTY/stout/include -I $LP_THIRD_PARTY/protobuf-2.5.0/src"


$COMPILER $HEADER_FILES -lmesos -std=c++11 -fPIC -shared ./src/FedCom.cpp -o libFedComModule.so 

#$MESOS_HOME_DIR/build/src/.libs/lt-mesos-master --ip=127.0.0.1 --work_dir=$HOME --modules="file://$PWD/jFedCommunication.json"
