import { Controller, Get } from '@nestjs/common';
import { IUser } from './types';
import { UserService } from './user.service';

@Controller('user')
export class UserController {
  constructor(private readonly service: UserService) {}

  @Get()
  getUser(): IUser {
    const result = this.service.getUser('test-user-id');

    console.log(this.service);
    console.log(result);
    return result;
  }
}
