__int64 __fastcall sub_30CA0(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 tinfo_size; // rax
  __int64 v4; // rdx
  char v5; // al
  char v6; // r13
  unsigned __int8 scalar_bt; // al
  __int64 v8; // [rsp+0h] [rbp-98h]
  __int64 v9; // [rsp+18h] [rbp-80h] BYREF
  __int64 v10; // [rsp+20h] [rbp-78h] BYREF
  __int64 v11; // [rsp+28h] [rbp-70h] BYREF
  __int128 v12; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13; // [rsp+40h] [rbp-58h] BYREF
  int v14; // [rsp+48h] [rbp-50h]
  __int16 v15; // [rsp+4Ch] [rbp-4Ch]
  unsigned __int64 v16; // [rsp+58h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v8 = a1 + 8;
  copy_tinfo_t((char *)&v12 + 8, &v11);
  v13 = 0;
  copy_tinfo_t(&v13, &v10);
  v15 = 0;
  v14 = 0;
  clear_tinfo_t(&v11);
  clear_tinfo_t(&v10);
  copy_tinfo_t(&v12, a1 + 8);
  create_tinfo(&v9, 10, 10, &v12);
  clear_tinfo_t(&v13);
  clear_tinfo_t((char *)&v12 + 8);
  clear_tinfo_t(&v12);
  if ( *(_DWORD *)(a1 + 136) )
  {
    tinfo_size = get_tinfo_size(0, v9, 0);
    v4 = *(unsigned int *)(a1 + 136);
    if ( v4 != tinfo_size )
    {
      if ( (((_DWORD)v4 - 4) & 0xFFFFFFFB) != 0 )
      {
        scalar_bt = get_scalar_bt(v4);
        if ( !scalar_bt )
          goto LABEL_12;
        *(_QWORD *)&v12 = scalar_bt;
        copy_tinfo_t(&v9, &v12);
        clear_tinfo_t(&v12);
      }
      else
      {
        v11 = 0;
        v10 = 0;
        v12 = 0;
        copy_tinfo_t((char *)&v12 + 8, &v10);
        v13 = 0;
        copy_tinfo_t(&v13, &v11);
        v14 = 0;
        v15 = 0;
        clear_tinfo_t(&v10);
        clear_tinfo_t(&v11);
        copy_tinfo_t(&v12, v8);
        v5 = 64;
        if ( *(_DWORD *)(a1 + 136) == 4 )
          v5 = 32;
        HIBYTE(v15) = v5;
        v6 = create_tinfo(&v9, 10, 10, &v12);
        clear_tinfo_t(&v13);
        clear_tinfo_t((char *)&v12 + 8);
        clear_tinfo_t(&v12);
        if ( !v6 )
        {
LABEL_12:
          v1 = 0;
          if ( get_tinfo_size(0, v9, 0) >= (unsigned __int64)*(unsigned int *)(a1 + 136) )
            goto LABEL_4;
          goto LABEL_3;
        }
      }
    }
  }
  v1 = 1;
LABEL_3:
  copy_tinfo_t(v8, &v9);
LABEL_4:
  clear_tinfo_t(&v9);
  return v1;
}

