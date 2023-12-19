import { Injectable } from '@nestjs/common';
import { IUser } from './types';


const userTable: Record<string, IUser> = {
  ['test-user-id']: {
    uuid: 'test-user-id',
    name: 'guy mclean',
    email: 'guymac111@googlemail.com',
  },
};

@Injectable()
export class UserService {
  constructor() {}

  getUser(uuid: string): IUser {
    return userTable[uuid];
  }
}
