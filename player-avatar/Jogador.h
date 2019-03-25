//
//  Jogador.h
//  player-avatar
//
//  Created by Usuário Convidado on 25/03/19.
//  Copyright © 2019 Guilherme BIgois. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Jogador : NSObject

// 4) DECLARAR AS VARIÁVEIS PARA OS CAMPOS
@property (nonatomic, retain) NSString *nome;
@property (nonatomic) int pontos;

// 5) MÉTODO DOS BOTÕES
- (void) Logar;
- (int) Comprar:(int) valor;

@end

NS_ASSUME_NONNULL_END
