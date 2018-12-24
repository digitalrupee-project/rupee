// Copyright (c) 2018 The PIVX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef DIGITALRUPEES_ACCUMULATORCHECKPOINTS_JSON_H
#define DIGITALRUPEES_ACCUMULATORCHECKPOINTS_JSON_H

#include <string>
std::string GetMainCheckpoints() {
    std::string strMainCheckpoints = "[\n"
                "  {\n"
            "    \"height\": 1523,\n"
            "    \"1\": \"88001e3bca7fe19887c5ccdda34f2fa141d95172ace2534ea73f04da6d677804676fd07dd6cccf7eb87a3e7d774392ba23ac3d55a5aa86f8795e644bc81279fa406d849c88f410de8bf08c0c6cef5fc376f0ba9cd0ed5788cc66037379e60ef8f9b2bb373d949d8664712de566e2375696a9f6a36381b9daa579cbf441f9a1fd\",\n"
            "    \"5\": \"18fb5f1025809836c903fb0930830c6dcb639c37a73fd42a13170d4397db45c34c9088f8bca682f6bdc9cd580773b3239e9209bc3e4bde4e1c5e44938f6515185eba326b9e5816679eea4e0f710c3bad9b76835106ff4ae1ebc03871e628710cbf3cdb8753709682002b8f0bfdc295269226312ce66cb3c1d35e282b0e651d79\",\n"
            "    \"10\": \"bc8c86255d20ee580404375d8ce9e9ae77e9515b01f6af0cbd5c04e626142833607e35dec77174a081eb3a27863c17019b314d5b5391a7dcd10a62c7e449fa787464d4542ef3ccae5448f60ce943be1160c6e969eb503c04f07cba0a4e20f52d1e241d3f648adb43d2d0eb77538eadd6a216c75fe0203ef6be215a32b005c331\",\n"
            "    \"50\": \"b7b51be05844f87a6150a5df7ff40f13e0ccce4ec15f5a69284fb12e071aea7bb7e36cd98c7f31a90513ce91aa0c0404897ad8aee26e5a8bff975f2055888bca37bb7bf798df753d8cea0b0c259d45f46d71bfd0c067a5cbb0d6c29d9ffdb82c19c50108e313ddbc2ace8013641c0d6fb616d2ad567a95bd4c1ecd8d7022b4bf\",\n"
            "    \"100\": \"52a1806440e480e60e88aaa5fa3d8385df615cc44518db90522ce8c033e3920464000a252519f098e910a36c7b3cbe42a5d69d987cb8e320c8c67a46d0f693650989d2c74aea8348067fe1eeca50432964645194454e6cf8f41b9624b6884e260bc3d9cc6bd562140b7708f06573ead3a9a6261738ab1426af16502896cf97a1\",\n"
            "    \"500\": \"bc03ae775a090718ccc842504e83361b7ac61c208abf9cd2bbbe5d6101b323b8d343cfdc7d9ba5cf48ed283d5696c883331f223e9650ba43e1528b544a4e8ababc62f195a711f9f15843e9e9376509e68976daf06c38baa937742b8cb0d2a680d3da1fedfb4517549dadd5dec835cec1c9552bb5842d9172abe17f19c12a063b\",\n"
            "    \"1000\": \"cf38ed32e5fdaadfb505e3cc03480e3df8409c96d3480138d942fd04021f20fc70c66e1ab88b0ae4208ee9e3b46b77f4acd4f39d2653055f3f63c4f13da9a013acd51d04d04a8a29d51e51b2ebaeb2832a6940635641efc13f3b174f34d6f189dc65740c5fed20a707b9421a38dcb01c6ff7564d91ab7ca691acac2f68c49bd5\",\n"
            "    \"5000\": \"4ceee39a2026ac38f101fa041e067bbcf6c4755a4ab64eb04211fb82d3084983b395682e2d80021f2c62af9245c148f65e57bd77ad030023fae8b3572d0b5c623832ac064700f227d76392802ce8bf66fe29cd3fcd750a170cef9c184b0fceee37d00181e0f863e1cc82f28728c524664217d135c1715639850d34b473f5ce8d\"\n"
            "  }\n"
            "]";
    return strMainCheckpoints;
}

std::string GetTestCheckpoints() {
    std::string strTestCheckpoints = "[\n"
            "  {\n"
            "    \"height\": 0,\n"
            "    \"1\": \"0\",\n"
            "    \"5\": \"0\",\n"
            "    \"10\": \"0\",\n"
            "    \"50\": \"0\",\n"
            "    \"100\": \"0\",\n"
            "    \"500\": \"0\",\n"
            "    \"1000\": \"0\",\n"
            "    \"5000\": \"0\"\n"
            "  }\n"
            "]";
    return strTestCheckpoints;
}

std::string GetRegTestCheckpoints() {
    std::string strRegTestCheckpoints = "[\n"
            "  {\n"
            "    \"height\": 0,\n"
            "    \"1\": \"0\",\n"
            "    \"5\": \"0\",\n"
            "    \"10\": \"0\",\n"
            "    \"50\": \"0\",\n"
            "    \"100\": \"0\",\n"
            "    \"500\": \"0\",\n"
            "    \"1000\": \"0\",\n"
            "    \"5000\": \"0\"\n"
            "  }\n"
            "]";
    return strRegTestCheckpoints;
}

#endif //DIGITALRUPEES_ACCUMULATORCHECKPOINTS_JSON_H
