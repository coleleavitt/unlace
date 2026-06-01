unsigned __int64 __fastcall sub_12400(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // r12
  _DWORD *v4; // rax
  bool v5; // r15
  int i; // r12d
  bool v7; // al
  int v9; // eax
  unsigned __int8 v10; // [rsp+8h] [rbp-A0h]
  const char *v11; // [rsp+10h] [rbp-98h]
  __int64 v12; // [rsp+30h] [rbp-78h]
  __int64 v13; // [rsp+50h] [rbp-58h]
  unsigned __int64 v14; // [rsp+68h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 16);
  v14 = __readfsqword(0x28u);
  v3 = (_QWORD *)getseg();
  if ( (getinf() & 0x200) != 0 )
  {
    if ( v3 )
    {
      v4 = *(_DWORD **)(a1 + 16);
      v5 = *v3 == v2;
      for ( i = v4[17]; v4[18] >= i; ++i )
      {
        if ( v4[20] == i || v4[21] == i )
          continue;
        if ( (unsigned __int8)get_sreg_range() )
        {
          v7 = v5;
          if ( !v2 )
          {
            if ( !(unsigned __int8)get_prev_sreg_range() )
            {
LABEL_13:
              v11 = *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * i);
              v10 = getinf();
              v9 = strlen(*(const char **)(*(_QWORD *)(a1 + 24) + 48LL));
              sub_116E0(a2, (__int64)"%-*s assume %s: %a", v10 - v9 - 2, &byte_185DF, v11, 0.0);
              goto LABEL_9;
            }
            v7 = v5 || v12 != v13;
          }
          if ( v7 )
            goto LABEL_13;
        }
LABEL_9:
        v4 = *(_DWORD **)(a1 + 16);
      }
    }
  }
  return v14 - __readfsqword(0x28u);
}

