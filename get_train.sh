#!/bin/bash
if [ "$1" == "" ]; then
   echo "   === Usage example: get_train.sh PWGJE/Jets_EMC_PbPb/6293_20201109-2310"
fi
BASE_URL="http://alitrain.cern.ch/train-workdir/"
TRAIN_CATE="PWGJE/Jets_EMC_PbPb/"
TRAIN_NUM="6293_20201109-2310"
CDIR=`pwd`
mkdir -p $TRAIN_NUM && cd $TRAIN_NUM

wget -q $BASE_URL/$TRAIN_CATE/$TRAIN_NUM/config/MLTrainDefinition.cfg -O MLTrainDefinition.cfg
wget -q $BASE_URL/$TRAIN_CATE/$TRAIN_NUM/config/env.sh -O env.sh
wget -q $BASE_URL/$TRAIN_CATE/$TRAIN_NUM/config/generator_customization.C -O generator_customization.C
wget -q $BASE_URL/$TRAIN_CATE/$TRAIN_NUM/config/globalvariables.C -O globalvariables.C
wget -q $BASE_URL/$TRAIN_CATE/$TRAIN_NUM/config/handlers.C -O handlers.C
wget -q $BASE_URL/generate.C -O generate.C

echo "Train directory: $TRAIN_DIR"
echo "To generate the train make sure you have alien-token-init token and go to the train directory"
echo "   source env.sh"
echo "   aliroot generate.C"
ls -l
#cd $CDIR
