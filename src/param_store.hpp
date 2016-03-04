/*******************************************************************************
 * Copyright (c) 2016 Wojciech Migda
 * All rights reserved
 * Distributed under the terms of the GNU LGPL v3
 *******************************************************************************
 *
 * Filename: param_store.hpp
 *
 * Description:
 *      description
 *
 * Authors:
 *          Wojciech Migda (wm)
 *
 *******************************************************************************
 * History:
 * --------
 * Date         Who  Ticket     Description
 * ----------   ---  ---------  ------------------------------------------------
 * 2016-03-03   wm              Initial version
 *
 ******************************************************************************/


#ifndef PARAM_STORE_HPP_
#define PARAM_STORE_HPP_

namespace params
{


const std::map<const std::string, const std::string> CURRENT
{
//    {"booster", "gblinear"},
    {"booster", "gbtree"},
    {"reg_alpha", "0"},
    {"colsample_bytree", "0.65"},
    {"silent", "1"},
    {"colsample_bylevel", "1"},
    {"scale_pos_weight", "1"},
    {"learning_rate", "0.045"},
    {"missing", "nan"},
    {"max_delta_step", "0"},
    {"base_score", "0.5"},
    {"n_estimators", "600"},
    {"subsample", "0.85"},
    {"reg_lambda", "1"},
    {"seed", "0"},
    {"min_child_weight", "65"},

    {"objective", "rank:pairwise"},
    {"num_pairsample", "2"},
//    {"objective", "binary:logitraw"},
//    {"objective", "binary:logistic"},
    {"max_depth", "7"},
    {"gamma", "0"}
};

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

const std::map<const std::string, const std::string> sub8
{
    // LB: 811038.67
    // CV: 810404
    // no FE

    {"booster", "gbtree"},
    {"reg_alpha", "0"},
    {"colsample_bytree", "0.65"},
    {"silent", "1"},
    {"colsample_bylevel", "1"},
    {"scale_pos_weight", "1"},
    {"learning_rate", "0.045"},
    {"missing", "nan"},
    {"max_delta_step", "0"},
    {"base_score", "0.5"},
    {"n_estimators", "600"},
    {"subsample", "0.85"},
    {"reg_lambda", "1"},
    {"seed", "0"},
    {"min_child_weight", "65"},

    {"objective", "rank:pairwise"},
    {"max_depth", "7"},
    {"gamma", "0"}
};


const std::map<const std::string, const std::string> sub33
{
    // sub8, n_estimators=590

    // LB: 810787.55
    // CV: 811512
    // no FE

    {"booster", "gbtree"},
    {"reg_alpha", "0"},
    {"colsample_bytree", "0.65"},
    {"silent", "1"},
    {"colsample_bylevel", "1"},
    {"scale_pos_weight", "1"},
    {"learning_rate", "0.045"},
    {"missing", "nan"},
    {"max_delta_step", "0"},
    {"base_score", "0.5"},
    {"n_estimators", "590"},
    {"subsample", "0.85"},
    {"reg_lambda", "1"},
    {"seed", "0"},
    {"min_child_weight", "65"},

    {"objective", "rank:pairwise"},
    {"max_depth", "7"},
    {"gamma", "0"}
};


const std::map<const std::string, const std::string> sub26
{
    // sub8, n_estimators=610

    // LB: 810682.24
    // CV: 810784
    // no FE

    {"booster", "gbtree"},
    {"reg_alpha", "0"},
    {"colsample_bytree", "0.65"},
    {"silent", "1"},
    {"colsample_bylevel", "1"},
    {"scale_pos_weight", "1"},
    {"learning_rate", "0.045"},
    {"missing", "nan"},
    {"max_delta_step", "0"},
    {"base_score", "0.5"},
    {"n_estimators", "610"},
    {"subsample", "0.85"},
    {"reg_lambda", "1"},
    {"seed", "0"},
    {"min_child_weight", "65"},

    {"objective", "rank:pairwise"},
    {"max_depth", "7"},
    {"gamma", "0"}
};


const std::map<const std::string, const std::string> sub24
{
    // from hyperopt log 4 [10-fold] (rank 4th) where it scored 813247.42337
    // {'n_estimators': 720, 'subsample': 0.6004793023546672, 'colsample_bytree': 0.4589960445147412, 'max_depth': 6, 'min_child_weight': 130}

    // LB: 810479.86
    // CV: 809573
    // no FE

    {"booster", "gbtree"},
    {"reg_alpha", "0"},
    {"colsample_bytree", "0.4590"},
    {"silent", "1"},
    {"colsample_bylevel", "1"},
    {"scale_pos_weight", "1"},
    {"learning_rate", "0.045"},
    {"missing", "nan"},
    {"max_delta_step", "0"},
    {"base_score", "0.5"},
    {"n_estimators", "720"},
    {"subsample", "0.6005"},
    {"reg_lambda", "1"},
    {"seed", "0"},
    {"min_child_weight", "130"},

    {"objective", "rank:pairwise"},
    {"max_depth", "6"},
    {"gamma", "0"}
};


const std::map<const std::string, const std::string> sub10
{
    // sub8, n_estimators=650

    // LB: 810446.95
    // CV: 809241
    // no FE

    {"booster", "gbtree"},
    {"reg_alpha", "0"},
    {"colsample_bytree", "0.65"},
    {"silent", "1"},
    {"colsample_bylevel", "1"},
    {"scale_pos_weight", "1"},
    {"learning_rate", "0.045"},
    {"missing", "nan"},
    {"max_delta_step", "0"},
    {"base_score", "0.5"},
    {"n_estimators", "650"},
    {"subsample", "0.85"},
    {"reg_lambda", "1"},
    {"seed", "0"},
    {"min_child_weight", "65"},

    {"objective", "rank:pairwise"},
    {"max_depth", "7"},
    {"gamma", "0"}
};


const std::map<const std::string, const std::string> sub13
{
    // sub8, subsample=0.8

    // LB: 810079.63
    // CV: 809129
    // no FE

    {"booster", "gbtree"},
    {"reg_alpha", "0"},
    {"colsample_bytree", "0.65"},
    {"silent", "1"},
    {"colsample_bylevel", "1"},
    {"scale_pos_weight", "1"},
    {"learning_rate", "0.045"},
    {"missing", "nan"},
    {"max_delta_step", "0"},
    {"base_score", "0.5"},
    {"n_estimators", "600"},
    {"subsample", "0.8"},
    {"reg_lambda", "1"},
    {"seed", "0"},
    {"min_child_weight", "65"},

    {"objective", "rank:pairwise"},
    {"max_depth", "7"},
    {"gamma", "0"}
};


const std::map<const std::string, const std::string> sub37
{
    // sub24 + num_pairsample=2

    // LB: 809772.75
    // CV: 812317
    // no FE

    {"booster", "gbtree"},
    {"reg_alpha", "0"},
    {"colsample_bytree", "0.4590"},
    {"silent", "1"},
    {"colsample_bylevel", "1"},
    {"scale_pos_weight", "1"},
    {"learning_rate", "0.045"},
    {"missing", "nan"},
    {"max_delta_step", "0"},
    {"base_score", "0.5"},
    {"n_estimators", "720"},
    {"subsample", "0.6005"},
    {"reg_lambda", "1"},
    {"seed", "0"},
    {"min_child_weight", "130"},

    {"num_pairsample", "4"},

    {"objective", "rank:pairwise"},
    {"max_depth", "6"},
    {"gamma", "0"}
};


const std::map<const std::string, const std::string> sub9
{
    // sub8, n_estimators=700

    // LB: 809303.95
    // CV: 807533
    // no FE

    {"booster", "gbtree"},
    {"reg_alpha", "0"},
    {"colsample_bytree", "0.65"},
    {"silent", "1"},
    {"colsample_bylevel", "1"},
    {"scale_pos_weight", "1"},
    {"learning_rate", "0.045"},
    {"missing", "nan"},
    {"max_delta_step", "0"},
    {"base_score", "0.5"},
    {"n_estimators", "700"},
    {"subsample", "0.85"},
    {"reg_lambda", "1"},
    {"seed", "0"},
    {"min_child_weight", "65"},

    {"objective", "rank:pairwise"},
    {"max_depth", "7"},
    {"gamma", "0"}
};


const std::map<const std::string, const std::string> sub11
{
    // sub8, n_estimators=550

    // LB: 809167.39
    // CV: 811629
    // no FE

    {"booster", "gbtree"},
    {"reg_alpha", "0"},
    {"colsample_bytree", "0.65"},
    {"silent", "1"},
    {"colsample_bylevel", "1"},
    {"scale_pos_weight", "1"},
    {"learning_rate", "0.045"},
    {"missing", "nan"},
    {"max_delta_step", "0"},
    {"base_score", "0.5"},
    {"n_estimators", "550"},
    {"subsample", "0.85"},
    {"reg_lambda", "1"},
    {"seed", "0"},
    {"min_child_weight", "65"},

    {"objective", "rank:pairwise"},
    {"max_depth", "7"},
    {"gamma", "0"}
};








const std::map<const std::string, const std::string> sub35
{
    // sub24 + num_pairsample=6

    // LB: 801047.70
    // CV: 814476
    // no FE

    {"booster", "gbtree"},
    {"reg_alpha", "0"},
    {"colsample_bytree", "0.4590"},
    {"silent", "1"},
    {"colsample_bylevel", "1"},
    {"scale_pos_weight", "1"},
    {"learning_rate", "0.045"},
    {"missing", "nan"},
    {"max_delta_step", "0"},
    {"base_score", "0.5"},
    {"n_estimators", "720"},
    {"subsample", "0.6005"},
    {"reg_lambda", "1"},
    {"seed", "0"},
    {"min_child_weight", "130"},

    {"num_pairsample", "6"},

    {"objective", "rank:pairwise"},
    {"max_depth", "6"},
    {"gamma", "0"}
};


const std::map<const std::string, const std::string> sub36
{
    // sub24 + num_pairsample=4

    // LB: 802622.24
    // CV: 812317
    // no FE

    {"booster", "gbtree"},
    {"reg_alpha", "0"},
    {"colsample_bytree", "0.4590"},
    {"silent", "1"},
    {"colsample_bylevel", "1"},
    {"scale_pos_weight", "1"},
    {"learning_rate", "0.045"},
    {"missing", "nan"},
    {"max_delta_step", "0"},
    {"base_score", "0.5"},
    {"n_estimators", "720"},
    {"subsample", "0.6005"},
    {"reg_lambda", "1"},
    {"seed", "0"},
    {"min_child_weight", "130"},

    {"num_pairsample", "4"},

    {"objective", "rank:pairwise"},
    {"max_depth", "6"},
    {"gamma", "0"}
};




////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

const std::map<const std::string, const std::string> sub18
{
    // sub8, two FE: PROP_PAGE_IMPRESSIONS_DWELL, PROP_VOD_VIEWS_DWELL

    // LB: 810488.63
    // CV: 810224
    // FE (only top-2)

    {"booster", "gbtree"},
    {"reg_alpha", "0"},
    {"colsample_bytree", "0.65"},
    {"silent", "1"},
    {"colsample_bylevel", "1"},
    {"scale_pos_weight", "1"},
    {"learning_rate", "0.045"},
    {"missing", "nan"},
    {"max_delta_step", "0"},
    {"base_score", "0.5"},
    {"n_estimators", "600"},
    {"subsample", "0.85"},
    {"reg_lambda", "1"},
    {"seed", "0"},
    {"min_child_weight", "65"},

    {"objective", "rank:pairwise"},
    {"max_depth", "7"},
    {"gamma", "0"}
};


////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

const std::map<const std::string, const std::string> sub30
{
    // from hyper.rank.f20.noFE.log, best entry scored at 815135.60524 with 510 estimators
    // {'n_estimators': 510, 'subsample': 0.6399543679962626, 'colsample_bytree': 0.6612120010371612,
    //  'max_depth': 7, 'min_child_weight': 135}

    // LB: 809041.44
    // CV: .
    // FE full

    {"booster", "gbtree"},
    {"reg_alpha", "0"},
    {"colsample_bytree", "0.6612"},
    {"silent", "1"},
    {"colsample_bylevel", "1"},
    {"scale_pos_weight", "1"},
    {"learning_rate", "0.045"},
    {"missing", "nan"},
    {"max_delta_step", "0"},
    {"base_score", "0.5"},
    {"n_estimators", "600"},
    {"subsample", "0.6400"},
    {"reg_lambda", "1"},
    {"seed", "0"},
    {"min_child_weight", "135"},

    {"objective", "rank:pairwise"},
    {"max_depth", "7"},
    {"gamma", "0.0000"}
};


const std::map<const std::string, const std::string> sub23
{
    // from hyperopt.2.sorted.log, best entry scored at 814158.03998 with 570 estimators, here at 725
    // {'n_estimators': 570, 'subsample': 0.8546865430244482, 'colsample_bytree': 0.562540029980502, 'min_child_weight': 90}

    // LB: 808315.02
    // CV: .
    // FE full

    {"booster", "gbtree"},
    {"reg_alpha", "0"},
    {"colsample_bytree", "0.5625"},
    {"silent", "1"},
    {"colsample_bylevel", "1"},
    {"scale_pos_weight", "1"},
    {"learning_rate", "0.045"},
    {"missing", "nan"},
    {"max_delta_step", "0"},
    {"base_score", "0.5"},
    {"n_estimators", "725"},
    {"subsample", "0.8547"},
    {"reg_lambda", "1"},
    {"seed", "0"},
    {"min_child_weight", "90"},

    {"objective", "rank:pairwise"},
    {"max_depth", "7"},
    {"gamma", "0"}
};


const std::map<const std::string, const std::string> sub20
{
    // from hyperopt.2.sorted.log, best entry scored at 814158.03998 with 570 estimators, here at 650
    // {'n_estimators': 570, 'subsample': 0.8546865430244482, 'colsample_bytree': 0.562540029980502, 'min_child_weight': 90}

    // LB: 808065.26
    // CV: .
    // FE full

    {"booster", "gbtree"},
    {"reg_alpha", "0"},
    {"colsample_bytree", "0.5625"},
    {"silent", "1"},
    {"colsample_bylevel", "1"},
    {"scale_pos_weight", "1"},
    {"learning_rate", "0.045"},
    {"missing", "nan"},
    {"max_delta_step", "0"},
    {"base_score", "0.5"},
    {"n_estimators", "650"},
    {"subsample", "0.8547"},
    {"reg_lambda", "1"},
    {"seed", "0"},
    {"min_child_weight", "90"},

    {"objective", "rank:pairwise"},
    {"max_depth", "7"},
    {"gamma", "0"}
};


const std::map<const std::string, const std::string> sub14
{
    // sub8, plus full FE

    // LB: 808047.62
    // CV: 811931
    // FE full

    {"booster", "gbtree"},
    {"reg_alpha", "0"},
    {"colsample_bytree", "0.65"},
    {"silent", "1"},
    {"colsample_bylevel", "1"},
    {"scale_pos_weight", "1"},
    {"learning_rate", "0.045"},
    {"missing", "nan"},
    {"max_delta_step", "0"},
    {"base_score", "0.5"},
    {"n_estimators", "600"},
    {"subsample", "0.85"},
    {"reg_lambda", "1"},
    {"seed", "0"},
    {"min_child_weight", "65"},

    {"objective", "rank:pairwise"},
    {"max_depth", "7"},
    {"gamma", "0"}
};


////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

const std::map<const std::string, const std::string> sub31
{
    // from logitraw.scaleposweight.f5.log, best entry scored at 812319.95208
    // {'colsample_bytree': 0.9053682410507754, 'scale_pos_weight': 0.674004598499349,
    //  'min_child_weight': 120, 'n_estimators': 700, 'subsample': 0.903602973136531,
    //  'objective': 'binary:logitraw', 'max_depth': 4, 'gamma': 0.5390140055211626}

    // LB: 808664.36
    // CV: .
    // FE full

    {"booster", "gbtree"},
    {"reg_alpha", "0"},
    {"colsample_bytree", "0.9054"},
    {"silent", "1"},
    {"colsample_bylevel", "1"},
    {"scale_pos_weight", "0.6740"},
    {"learning_rate", "0.045"},
    {"missing", "nan"},
    {"max_delta_step", "0"},
    {"base_score", "0.5"},
    {"n_estimators", "700"},
    {"subsample", "0.9036"},
    {"reg_lambda", "1"},
    {"seed", "0"},
    {"min_child_weight", "120"},

    {"objective", "binary:logitraw"},
    {"max_depth", "4"},
    {"gamma", "0.5390"}
};


////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

}  // namespace params


#endif /* PARAM_STORE_HPP_ */
