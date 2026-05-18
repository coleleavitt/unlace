__int64 __fastcall sub_E65E0(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  int v5; // edx
  int *v6; // rax
  __int64 v7; // rdx
  int v8; // ecx
  __int64 i; // r15
  int v10; // ecx
  __int16 *v11; // rdx
  __int16 *v12; // rax
  __int64 v13; // rsi
  _QWORD v15[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = 0;
  v4 = *(_QWORD *)(a2 + 72);
  for ( v15[1] = __readfsqword(0x28u); v4; v4 = *(_QWORD *)(v4 + 8) )
  {
    v5 = *(_DWORD *)(v4 + 40);
    if ( v5 > 0 )
    {
      v6 = (int *)(v4 + 64);
      v7 = v4 + 16LL * (unsigned int)(v5 - 1) + 80;
      do
      {
        while ( 1 )
        {
          v8 = *v6;
          if ( *v6 > 31 )
            break;
          v6 += 4;
          v3 |= 1 << v8;
          if ( v6 == (int *)v7 )
            goto LABEL_7;
        }
        v6 += 4;
        v3 = -1;
      }
      while ( v6 != (int *)v7 );
    }
LABEL_7:
    ;
  }
  for ( i = sub_C2AB0(*(_QWORD *)(a2 + 96) + 80LL, *(unsigned __int8 **)a2, nullptr)[2]; i; i = *(_QWORD *)(i + 24) )
  {
    v15[0] = 0;
    sub_E6250(a1, a2, i, v15, nullptr);
    if ( v15[0] )
    {
      v10 = *(unsigned __int16 *)(v15[0] + 94LL);
      if ( (_WORD)v10 )
      {
        v11 = *(__int16 **)(v15[0] + 8LL);
        v12 = v11 + 1;
        v13 = (__int64)&v11[v10 - 1 + 1];
        while ( 1 )
        {
          if ( *v11 <= 31 )
          {
            v3 |= 1 << *v11;
            v11 = v12;
            if ( v12 == (__int16 *)v13 )
              break;
          }
          else
          {
            v3 = -1;
            v11 = v12;
            if ( v12 == (__int16 *)v13 )
              break;
          }
          ++v12;
        }
      }
    }
  }
  return v3;
}
