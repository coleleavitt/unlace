bool __fastcall sub_296790(__int64 a1, _DWORD a2, __int64 a3, int a4)
{
  int v7; // r8d
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r15
  _QWORD *v11; // rbx
  char v12; // al
  int v13; // ebx
  int v14; // eax
  char tinfo_property; // bl
  char v16; // al
  char v17; // al
  unsigned __int64 tinfo_size; // rax
  int v19; // r8d
  int v20; // r9d
  unsigned __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // r12
  __int64 v24; // rbp
  _QWORD *v25; // rbx
  char v26; // [rsp+Fh] [rbp-79h]
  __int64 v27; // [rsp+10h] [rbp-78h] BYREF
  __int128 v28; // [rsp+18h] [rbp-70h]
  __int128 v29; // [rsp+28h] [rbp-60h]
  __int64 v30; // [rsp+38h] [rbp-50h]
  int v31; // [rsp+40h] [rbp-48h]
  unsigned __int64 v32; // [rsp+48h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  if ( (get_tinfo_property() & 0x3F) == 1 )
    return 1;
  if ( (get_tinfo_property() & 0x2F) == 0xD )
  {
    v27 = 0;
    v31 = 1;
    v30 = 0;
    v28 = 0;
    v29 = 0;
    if ( (unsigned __int8)get_tinfo_details() && sub_296460(a1, (__int64)&v27, a3, a4, v7) )
    {
      v22 = v27;
      if ( v27 )
      {
        v23 = v28;
        if ( (_QWORD)v28 )
        {
          v24 = 0;
          do
          {
            v25 = (_QWORD *)(v22 + 144 * v24);
            clear_tinfo_t();
            if ( v25[5] )
            {
              v25[6] = 0;
              qfree();
            }
            if ( v25[2] )
            {
              v25[3] = 0;
              qfree();
            }
            ++v24;
            v22 = v27;
          }
          while ( v23 != v24 );
        }
        *(_QWORD *)&v28 = 0;
        qfree();
      }
      return 1;
    }
    v8 = v27;
    if ( v27 )
    {
      v9 = v28;
      if ( (_QWORD)v28 )
      {
        v10 = 0;
        do
        {
          v11 = (_QWORD *)(v8 + 144 * v10);
          clear_tinfo_t();
          if ( v11[5] )
          {
            v11[6] = 0;
            qfree();
          }
          if ( v11[2] )
          {
            v11[3] = 0;
            qfree();
          }
          ++v10;
          v8 = v27;
        }
        while ( v9 != v10 );
      }
      *(_QWORD *)&v28 = 0;
      qfree();
    }
    goto LABEL_15;
  }
  if ( (get_tinfo_property() & 0xF) == 0xB )
  {
    v27 = 0;
    *(_QWORD *)&v28 = 0;
    if ( (unsigned __int8)get_tinfo_details()
      && (tinfo_size = get_tinfo_size()) != 0
      && tinfo_size * (unsigned int)(DWORD1(v28) - 1) >= a3 )
    {
      LODWORD(v21) = -1;
      if ( a3 != -1 )
        v21 = a3 % tinfo_size;
      v12 = sub_296790(a1, (unsigned int)&v27, v21, a4, v19, v20);
      if ( !v12 )
      {
        clear_tinfo_t();
        goto LABEL_15;
      }
    }
    else
    {
      v12 = 0;
    }
    v26 = v12;
    clear_tinfo_t();
    return v26;
  }
LABEL_15:
  if ( a3 > 0 )
    return 0;
  v13 = get_tinfo_size();
  if ( v13 < 0 )
    return 0;
  v14 = get_tinfo_size();
  if ( v14 < 0 )
    return 0;
  if ( v13 != v14 )
    return 0;
  tinfo_property = get_tinfo_property();
  if ( ((get_tinfo_property() & 0xF) == 9) != ((tinfo_property & 0xF) == 9) )
    return 0;
  if ( (unsigned __int8)compare_tinfo() )
    return 1;
  v16 = get_tinfo_property();
  if ( (v16 & 0x3E) != 0 && (v16 & 0xFu) <= 8 && (v17 = get_tinfo_property(), (v17 & 0x3E) != 0) )
    return (v17 & 0xFu) <= 8;
  else
    return 0;
}

