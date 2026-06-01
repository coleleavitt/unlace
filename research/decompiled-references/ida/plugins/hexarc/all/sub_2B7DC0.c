__int64 __fastcall sub_2B7DC0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  bool v4; // zf
  unsigned int v5; // r12d
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 i; // rbp
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 j; // rbp
  _QWORD *v13; // rax
  __int64 v15[7]; // [rsp+0h] [rbp-38h] BYREF

  v15[1] = __readfsqword(0x28u);
  v2 = *a2;
  v15[0] = v2;
  if ( v2 )
  {
    ++*(_DWORD *)(v2 + 104);
    v3 = sub_2A6890(a1 + 48, v15);
    v4 = (*(_DWORD *)(v2 + 104))-- == 1;
    v5 = v3;
    if ( v4 )
    {
      sub_2515F0((__int64 *)v2);
      v6 = *(_QWORD *)(v2 + 184);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v2 + 192);
        if ( v7 )
        {
          for ( i = 0; i != v7; ++i )
          {
            v9 = (_QWORD *)(v6 + 24 * i);
            if ( *v9 )
            {
              v9[1] = 0;
              qfree();
              v6 = *(_QWORD *)(v2 + 184);
            }
          }
        }
        *(_QWORD *)(v2 + 192) = 0;
        qfree();
      }
      if ( *(_QWORD *)(v2 + 160) )
      {
        *(_QWORD *)(v2 + 168) = 0;
        qfree();
      }
      v10 = *(_QWORD *)(v2 + 128);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v2 + 136);
        if ( v11 )
        {
          for ( j = 0; j != v11; ++j )
          {
            v13 = (_QWORD *)(v10 + 32 * j);
            if ( *v13 )
            {
              v13[1] = 0;
              qfree();
              v10 = *(_QWORD *)(v2 + 128);
            }
          }
        }
        *(_QWORD *)(v2 + 136) = 0;
        qfree();
      }
      sub_24DCD0(v2 + 16);
      j__qfree();
    }
  }
  else
  {
    return (unsigned int)sub_2A6890(a1 + 48, v15);
  }
  return v5;
}

