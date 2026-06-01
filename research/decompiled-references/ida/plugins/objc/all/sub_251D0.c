__int64 __fastcall sub_251D0(__int64 a1, _DWORD *a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  int v8; // edx
  unsigned __int64 i; // r12
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // r12
  __int64 v14; // rax
  unsigned __int16 v15; // [rsp+24h] [rbp-54h] BYREF
  unsigned __int16 v16; // [rsp+26h] [rbp-52h] BYREF
  __int64 v17; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v18[9]; // [rsp+30h] [rbp-48h] BYREF

  v18[1] = __readfsqword(0x28u);
  v4 = *a3;
  if ( *a3 >= a3[1] )
    return 0;
  while ( 1 )
  {
    v5 = *(_QWORD *)(a1 + 864);
    v6 = *(_QWORD *)a1;
    v17 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, unsigned __int64))(v6 + 136))(a1, &v17, v4 + v5) )
    {
      if ( v17 )
      {
        v15 = 0;
        if ( (unsigned __int8)sub_15880(&v15) )
        {
          v7 = *(_QWORD *)(a1 + 808) + v17;
          if ( !(unsigned __int8)sub_160A0(a1, v7, v15) )
            return 0xFFFFFFFFLL;
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 2216LL) )
            sub_EC40();
          v8 = a2[2];
          for ( i = v7 + *(_DWORD *)(a1 + 744) * (unsigned int)v15; v7 < i; v7 += *(unsigned int *)(a1 + 744) )
          {
            if ( (v8 & 1) != 0 )
            {
              v10 = *(_QWORD *)a1;
              v18[0] = 0;
              if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD *, unsigned __int64))(v10 + 136))(a1, v18, v7) )
              {
                if ( v18[0] )
                {
                  result = (**(__int64 (__fastcall ***)(_DWORD *))a2)(a2);
                  if ( (_DWORD)result )
                    return result;
                }
              }
              v8 = a2[2];
            }
          }
          if ( (v8 & 2) != 0 )
          {
            v16 = 0;
            if ( (unsigned __int8)sub_15880(&v16) )
            {
              if ( !(unsigned __int8)sub_160A0(a1, v7, v16) )
                return 0xFFFFFFFFLL;
              if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 2216LL) )
                sub_EC40();
              v12 = *(_DWORD *)(a1 + 744) * (unsigned int)v16;
              v13 = v12 + v7;
              if ( v7 < v12 + v7 )
                break;
            }
          }
        }
      }
    }
LABEL_3:
    v4 += *(_QWORD *)(a1 + 800);
    if ( v4 >= a3[1] )
      return 0;
  }
  while ( 1 )
  {
    v14 = *(_QWORD *)a1;
    v18[0] = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD *, unsigned __int64))(v14 + 136))(a1, v18, v7) )
    {
      if ( v18[0] )
      {
        result = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 8LL))(a2);
        if ( (_DWORD)result )
          return result;
      }
    }
    v7 += *(unsigned int *)(a1 + 744);
    if ( v7 >= v13 )
      goto LABEL_3;
  }
}
