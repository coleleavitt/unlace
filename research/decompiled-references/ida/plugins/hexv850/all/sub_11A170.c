char __fastcall sub_11A170(__int64 a1)
{
  __int64 v1; // rbx
  char result; // al
  _QWORD *v3; // rdx
  __int64 (__fastcall **v4)(); // rax
  int *v5; // rcx
  unsigned __int64 v6; // rax
  int v7; // edx
  char v8; // al
  char v9; // [rsp+Fh] [rbp-49h]
  char v10; // [rsp+Fh] [rbp-49h]
  __int64 (__fastcall **v11)(); // [rsp+10h] [rbp-48h] BYREF
  __int64 v12; // [rsp+18h] [rbp-40h]
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+28h] [rbp-30h]
  unsigned __int64 v15; // [rsp+38h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v1 = a1;
  while ( 2 )
  {
    switch ( *(_BYTE *)v1 )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 7:
      case 0xA:
      case 0xB:
      case 0xC:
      case 0xD:
        return 0;
      case 4:
        return sub_11A0D0(*(_BYTE **)(v1 + 8));
      case 5:
        v3 = *(_QWORD **)(v1 + 8);
        v4 = (__int64 (__fastcall **)())(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v3 + 1496LL) + 24LL) + 16LL)
                                       & (*(_QWORD *)(*v3 + 1440LL) + v3[1]));
        v12 = *(int *)(v1 + 4);
        v11 = v4;
        return sub_3125B0(*v3 + 232LL, &v11, 0);
      case 6:
        return 1;
      case 8:
        return *(_QWORD *)(*(_QWORD *)(v1 + 8) + 224LL) != 0;
      case 9:
        v5 = *(int **)(v1 + 8);
        v6 = v5[4];
        if ( *(_QWORD *)(*(_QWORD *)v5 + 440LL) < v6 )
          sub_116DC0(a1);
        v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 432LL) + 104 * v6);
        result = 0;
        if ( (unsigned int)(v7 - 3) > 1 )
        {
          v11 = nullptr;
          v12 = 0;
          v13 = 0;
          v14 = 0;
          sub_1170E0(*(_QWORD **)v5, (int)&v11, v1, 0xFFFF0000);
          v8 = sub_312BB0(**(_QWORD **)(v1 + 8) + 232LL, &v13);
          if ( v13 )
          {
            v9 = v8;
            *(_QWORD *)&v14 = 0;
            qfree();
            v8 = v9;
          }
          v10 = v8;
          qfree();
          return v10;
        }
        return result;
      case 0xE:
        a1 = *(_QWORD *)(v1 + 8);
        if ( !(unsigned __int8)sub_11A170(a1) )
        {
          v1 = *(_QWORD *)(v1 + 8) + 16LL;
          continue;
        }
        return 1;
      case 0xF:
        v11 = off_4B0F78;
        return (unsigned int)sub_119980((_BYTE *)v1) != 0;
      default:
        if ( !under_debugger )
          sub_37CFE0(50284);
        BUG();
    }
  }
}

