unsigned __int64 __fastcall sub_2465C0(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r15
  unsigned __int64 v3; // rax
  __int64 v4; // rbx
  char v5; // al
  unsigned __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned __int64 v10; // r15
  __int64 v11; // rbx
  char v12; // al
  _QWORD v13[3]; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v14; // [rsp+38h] [rbp-C0h]
  __int64 v15; // [rsp+48h] [rbp-B0h]
  __int64 v16; // [rsp+50h] [rbp-A8h]
  __int64 v17; // [rsp+58h] [rbp-A0h]
  __int64 v18; // [rsp+60h] [rbp-98h]
  __int64 v19; // [rsp+70h] [rbp-88h] BYREF
  int v20; // [rsp+78h] [rbp-80h]
  __int64 v21; // [rsp+7Ch] [rbp-7Ch]
  __int64 v22; // [rsp+A0h] [rbp-58h]
  int v23; // [rsp+A8h] [rbp-50h]
  char v24; // [rsp+ACh] [rbp-4Ch]
  __int64 v25; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v26; // [rsp+B8h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v13[0] = -1;
    v13[1] = 0xFFFFFFFF00000000LL;
    v13[2] = 0xFFFFFFFFLL;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v14 = 0;
    if ( a2 < v2 )
    {
      v6 = a2;
      do
      {
        v7 = 9 * v6++;
        v8 = *a1 + 8 * v7;
        clear_tinfo_t();
        sub_2559F0(v8);
        clear_tinfo_t();
      }
      while ( v2 != v6 );
    }
    else
    {
      v3 = a1[2];
      if ( (unsigned __int64)v13 >= *a1 && (unsigned __int64)v13 < *a1 + 72 * v3 )
      {
        v19 = -1;
        v20 = 0;
        v21 = -1;
        v22 = 0;
        v23 = 0;
        sub_25B3B0(&v19, v13);
        v25 = 0;
        v24 = BYTE4(v17);
        copy_tinfo_t();
        if ( a1[2] < a2 )
          *a1 = qvector_reserve();
        v10 = a1[1];
        if ( v10 < a2 )
        {
          do
          {
            v11 = *a1 + 72 * v10;
            *(_QWORD *)v11 = -1;
            *(_DWORD *)(v11 + 8) = 0;
            *(_QWORD *)(v11 + 12) = -1;
            *(_QWORD *)(v11 + 48) = 0;
            *(_DWORD *)(v11 + 56) = 0;
            sub_25B3B0(v11, &v19);
            v12 = v24;
            *(_QWORD *)(v11 + 64) = 0;
            *(_BYTE *)(v11 + 60) = v12;
            copy_tinfo_t();
            ++v10;
          }
          while ( a2 != v10 );
        }
        a1[1] = a2;
        clear_tinfo_t();
        sub_2559F0(&v19);
        clear_tinfo_t();
        goto LABEL_12;
      }
      if ( v3 < a2 )
      {
        *a1 = qvector_reserve();
        v2 = a1[1];
      }
      for ( ; v2 < a2; ++v2 )
      {
        v4 = *a1 + 72 * v2;
        *(_QWORD *)v4 = -1;
        *(_DWORD *)(v4 + 8) = 0;
        *(_QWORD *)(v4 + 12) = -1;
        *(_QWORD *)(v4 + 48) = 0;
        *(_DWORD *)(v4 + 56) = 0;
        sub_25B3B0(v4, v13);
        v5 = BYTE4(v17);
        *(_QWORD *)(v4 + 64) = 0;
        *(_BYTE *)(v4 + 60) = v5;
        copy_tinfo_t();
      }
    }
    a1[1] = a2;
LABEL_12:
    clear_tinfo_t();
    sub_2559F0(v13);
    clear_tinfo_t();
  }
  return v26 - __readfsqword(0x28u);
}

