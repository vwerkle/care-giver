//
//  LoginViewController.swift
//  CareGiver
//
//  Created by David William Nartey on 3/30/20.
//  Copyright © 2020 CareGiver. All rights reserved.
//

import UIKit

class LoginViewController: UIViewController{
    let aws = AWSAppSyncCall()
    override func viewDidLoad() {
        super.viewDidLoad()
        overrideUserInterfaceStyle = .light
    }
}
