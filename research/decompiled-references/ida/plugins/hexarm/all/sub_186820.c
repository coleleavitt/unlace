__int64 __fastcall sub_186820(__int64 a1, unsigned __int8 *a2, int a3, int a4)
{
  __int64 v4; // r12
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rbx
  _QWORD *v10; // rax
  _QWORD v12[2]; // [rsp+0h] [rbp-C8h] BYREF
  int v13; // [rsp+10h] [rbp-B8h]
  char v14; // [rsp+14h] [rbp-B4h]
  unsigned __int64 v15; // [rsp+18h] [rbp-B0h] BYREF
  __int128 v16; // [rsp+20h] [rbp-A8h]
  __int128 v17; // [rsp+30h] [rbp-98h]
  __int64 v18; // [rsp+40h] [rbp-88h]
  __int128 v19; // [rsp+48h] [rbp-80h]
  __int128 v20; // [rsp+58h] [rbp-70h]
  __int128 v21; // [rsp+68h] [rbp-60h]
  int v22; // [rsp+78h] [rbp-50h]
  int v23; // [rsp+7Ch] [rbp-4Ch]
  __int64 v24; // [rsp+80h] [rbp-48h]
  int v25; // [rsp+88h] [rbp-40h]
  unsigned __int64 v26; // [rsp+98h] [rbp-30h]

  v4 = a1;
  v6 = *(_QWORD *)(a1 + 96);
  v26 = __readfsqword(0x28u);
  v12[0] = 0xFFFFFFFF00000000LL;
  v15 = 0xFFFFFFFF00000000LL;
  v12[1] = 0;
  v13 = 0;
  v14 = 0;
  v18 = 0;
  v22 = 0;
  v24 = 0xFFFFFFFFLL;
  v25 = 16;
  v23 = a4;
  v16 = 0;
  v17 = 0;
  v19 = 0;
  v20 = -1;
  v21 = 0;
  if ( (unsigned __int8)sub_183130(v6, (__int64)v12, a2, a3, a4) && (unsigned int)sub_184640(v4, (char *)v12) == 1 )
    LOBYTE(v4) = (_DWORD)v24 == a3 - 1;
  else
    LODWORD(v4) = 0;
  clear_tinfo_t();
  v7 = v18;
  if ( v18 )
  {
    v8 = v19;
    if ( (_QWORD)v19 )
    {
      v9 = 0;
      do
      {
        v10 = (_QWORD *)(v7 + 40 * v9);
        if ( *v10 )
        {
          v10[1] = 0;
          qfree();
          v7 = v18;
        }
        ++v9;
      }
      while ( v8 != v9 );
    }
    *(_QWORD *)&v19 = 0;
    qfree();
  }
  if ( *((_QWORD *)&v16 + 1) )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  sub_11C7E0((__int64)&v15);
  sub_11C7E0((__int64)v12);
  return (unsigned int)v4;
}

