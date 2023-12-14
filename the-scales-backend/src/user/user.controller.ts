import { Controller, Get } from '@nestjs/common';
import { IUser } from './types';
import { UserService } from './user.service';

@Controller('user')
export class UserController {
  constructor(private service: UserService) {}

  @Get()
  getUser(): IUser {
    return this.service.getUser('test-user-id');
  }
}
