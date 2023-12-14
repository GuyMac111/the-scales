import { Injectable } from '@nestjs/common';
import { IUser } from './types';


const userTable: Record<string, IUser> = {
  testUser: {
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
