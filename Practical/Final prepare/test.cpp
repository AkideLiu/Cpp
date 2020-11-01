// Author : Akide Liu 
// Date : 31/10/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <gtest/gtest.h>
#include <iostream>
#include "Band.h"
#include "Metal.h"

TEST(final_prepare,q1){
    //
    Band *bublegum = new Band(4,2019);
    Metal *danzigwithtearsinmyeyes = new Metal(800,4,2019);

    //

    {
        testing::internal::CaptureStdout();
        cout << bublegum->get_age() << endl;
        string output = testing::internal::GetCapturedStdout();

        EXPECT_TRUE(output.find("young") != string::npos);
    }


    {
        testing::internal::CaptureStdout();
        cout << danzigwithtearsinmyeyes->get_age() << endl;
        string output = testing::internal::GetCapturedStdout();
        EXPECT_TRUE(
                output.find("This") != string::npos
                && output.find("young") != string::npos
                && output.find("is extremely dark!!") != string::npos
        );
    }

}