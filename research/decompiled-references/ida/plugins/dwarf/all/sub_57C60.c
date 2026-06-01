__int64 __fastcall sub_57C60(_QWORD *a1, _DWORD *a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rdx
  _QWORD *v6; // rax
  unsigned int v8; // eax
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // [rsp+0h] [rbp-38h] BYREF
  __int128 v15; // [rsp+8h] [rbp-30h]
  unsigned __int64 v16; // [rsp+18h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  v3 = (__int64 *)a1[1];
  v4 = *v3 + 8 * v3[1];
  if ( *v3 != v4 )
  {
    v6 = (_QWORD *)*v3;
    do
    {
      if ( (_DWORD *)*v6 == a2 )
        break;
      ++v6;
    }
    while ( (_QWORD *)v4 != v6 );
    if ( a1[2] < (unsigned __int64)(((__int64)v6 - *v3) >> 3) )
    {
      v14 = 0;
      v15 = 0;
      sub_57000(v3, &v14, (__int64)a2);
      if ( !(_QWORD)v15 )
      {
        if ( (debug & 0x400000) != 0 )
        {
          v8 = (unsigned int)sub_575D0(a2);
          sub_88B80((unsigned int)"%s::set_action(act=%s, ord=%u)\n", v8, (unsigned int)"act_drop", 0, v9, v10);
        }
        a2[84] = 5;
        v11 = a1[4];
        v12 = a1[3];
        if ( a1[5] < (unsigned __int64)(v11 + 1) )
        {
          v13 = qvector_reserve(a1 + 3, v12, v11 + 1, 8);
          a1[3] = v13;
          v12 = v13;
          v11 = a1[4];
        }
        *(_QWORD *)(v12 + 8 * v11) = a2;
        ++a1[4];
      }
      if ( v14 )
      {
        *(_QWORD *)&v15 = 0;
        qfree(v14);
      }
    }
  }
  return 0;
}

