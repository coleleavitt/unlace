char __fastcall sub_11EFE0(unsigned __int8 *a1, unsigned __int8 *a2, unsigned __int8 a3, double a4)
{
  unsigned __int8 *v4; // rbp
  unsigned __int8 v5; // cl
  __int64 v6; // rax
  unsigned __int8 *v7; // rbx
  char result; // al
  __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  unsigned __int8 v13; // r12
  _BYTE *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 (__fastcall **v17)(); // [rsp+0h] [rbp-68h] BYREF
  unsigned __int8 *v18; // [rsp+8h] [rbp-60h]
  __int64 v19; // [rsp+10h] [rbp-58h]
  __int64 v20; // [rsp+18h] [rbp-50h]
  __int64 v21; // [rsp+20h] [rbp-48h]
  char v22; // [rsp+28h] [rbp-40h]
  unsigned __int8 *v23; // [rsp+30h] [rbp-38h]
  unsigned __int8 v24; // [rsp+38h] [rbp-30h]
  unsigned __int64 v25; // [rsp+48h] [rbp-20h]

  while ( 1 )
  {
    v4 = a1;
    v5 = *a2;
    v6 = *a1;
    v25 = __readfsqword(0x28u);
    v7 = a2;
    if ( (unsigned __int8)(v5 - 14) > 1u )
      goto LABEL_6;
    if ( (unsigned __int8)(v6 - 14) > 1u )
    {
      v4 = a2;
      v6 = v5;
      v7 = a1;
LABEL_6:
      switch ( v6 )
      {
        case 1LL:
          result = 0;
          if ( *v7 == 1 )
          {
            v16 = *((int *)v4 + 1);
            v10 = *((int *)v7 + 1);
            result = v10 != 0 && v16 != 0;
            if ( result )
            {
              v11 = *((int *)v4 + 2);
              v12 = *((int *)v7 + 2);
              result = 0;
              if ( v16 + v11 - 1 >= v12 )
                return v10 + v12 - 1 >= v11;
            }
          }
          return result;
        case 4LL:
          v14 = *((_BYTE **)v4 + 1);
          v18 = nullptr;
          v19 = 0;
          v20 = 0;
          v21 = 0;
          v22 = 0;
          v17 = &off_4DD660;
          v23 = v7;
          v24 = a3;
          return (unsigned int)sub_11E900(v14, (__int64)&v17) != 0;
        case 5LL:
          result = 0;
          if ( *v7 == 5 )
          {
            v15 = *((int *)v4 + 1);
            v10 = *((int *)v7 + 1);
            result = v10 != 0 && v15 != 0;
            if ( result )
            {
              v12 = *(_QWORD *)(*((_QWORD *)v7 + 1) + 8LL);
              v11 = *(_QWORD *)(*((_QWORD *)v4 + 1) + 8LL);
              result = 0;
              if ( v15 + v11 - 1 >= v12 )
                return v10 + v12 - 1 >= v11;
            }
          }
          return result;
        case 6LL:
          result = 0;
          if ( *v7 == 6 )
          {
            v9 = *((int *)v4 + 1);
            v10 = *((int *)v7 + 1);
            result = v10 != 0 && v9 != 0;
            if ( result )
            {
              v11 = *((_QWORD *)v4 + 1);
              v12 = *((_QWORD *)v7 + 1);
              result = 0;
              if ( v9 + v11 - 1 >= v12 )
                return v10 + v12 - 1 >= v11;
            }
          }
          return result;
        case 8LL:
          if ( !under_debugger )
            sub_383060(0xC46Du, a4);
          BUG();
        case 9LL:
          result = 0;
          if ( *v7 == 9 )
            return *(_DWORD *)(*((_QWORD *)v4 + 1) + 16LL) == *(_DWORD *)(*((_QWORD *)v7 + 1) + 16LL);
          return result;
        case 14LL:
          goto LABEL_15;
        case 15LL:
          goto LABEL_4;
        default:
          return 0;
      }
    }
    if ( (_BYTE)v6 == 15 )
      break;
LABEL_15:
    v13 = a3;
    result = sub_11EFE0(*((unsigned __int8 **)v4 + 1), v7, a3);
    if ( result )
      return result;
    a3 = v13;
    a2 = v7;
    a1 = (unsigned __int8 *)(*((_QWORD *)v4 + 1) + 16LL);
  }
LABEL_4:
  v18 = v7;
  v17 = &off_4DD638;
  LOBYTE(v19) = a3;
  return (unsigned int)sub_11E540(v4, a4) != 0;
}

