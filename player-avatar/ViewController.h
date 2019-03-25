//
//  ViewController.h
//  player-avatar
//
//  Created by Usuário Convidado on 25/03/19.
//  Copyright © 2019 Guilherme BIgois. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

// 1) CRIAR A INTERFACE GRÁFICA

// 2) CRIAR OS OUTLETS DOS CAMPOS
@property (weak, nonatomic) IBOutlet UITextField *txtNome;
@property (weak, nonatomic) IBOutlet UITextField *txtPontos;

// 3) CRIAR ACÃO PARA OS BOTÕES
- (IBAction) btnLogOn:(id) sender;
- (IBAction) btnLogOn:(id) sender;

@end

