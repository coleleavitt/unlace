__int64 __fastcall sub_8CE80(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v8; // r14
  bool v9; // zf
  const char *v10; // rcx
  __int64 v11; // r15
  __int64 v12; // rsi
  int v13; // r14d
  unsigned int v14; // eax
  __int64 bytearray_linput; // rax
  __int64 zip_linput; // r13
  int v17; // r12d
  int v18; // esi
  unsigned int v19; // [rsp+Ch] [rbp-5Ch] BYREF
  __int64 v20; // [rsp+10h] [rbp-58h] BYREF
  __int128 v21; // [rsp+18h] [rbp-50h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 73) & 8) == 0 )
    return sub_89150(a1, a2, a3, a4);
  if ( *(_BYTE *)(a2 + 112) )
  {
LABEL_3:
    *a4 = 10;
    return 1;
  }
  v8 = *(_QWORD *)(a2 + 104);
  if ( v8 != qlseek(a1, v8, 0) )
  {
    if ( (debug & 0x400000) != 0 )
      sub_88B80((__int64)"File truncated.\n");
    goto LABEL_17;
  }
  v9 = *(_QWORD *)(a2 + 24) == 0;
  v10 = src;
  v19 = *(_QWORD *)(a2 + 88);
  if ( !v9 )
    v10 = *(const char **)(a2 + 16);
  sub_8CBF0(a1, &v19, 1u, (__int64)v10, v8, -1);
  v11 = v19;
  v12 = 0;
  v20 = 0;
  v21 = 0;
  v13 = v19;
  if ( v19 )
  {
    v20 = qvector_reserve(&v20, 0, v19, 1);
    memset((void *)(v20 + v21), 0, v11 - v21);
    *(_QWORD *)&v21 = v11;
    v12 = v20;
  }
  v14 = qlread(a1, v12, v11);
  if ( v13 != v14 )
  {
    sub_1D740((__int64)"Couldn't read %d bytes of compressed data (read %d).\n", v13, v14);
    goto LABEL_19;
  }
  bytearray_linput = create_bytearray_linput(v20, v21, v14);
  zip_linput = create_zip_linput(bytearray_linput, v21, 0);
  v17 = qlread(zip_linput, a3, *(unsigned int *)(a2 + 8));
  close_linput(zip_linput);
  v18 = *(_DWORD *)(a2 + 8);
  if ( v18 != v17 )
  {
    sub_1D740((__int64)"Couldn't read %d bytes of uncompressed data (read %d).\n", v18, v17);
LABEL_19:
    if ( v20 )
    {
      *(_QWORD *)&v21 = 0;
      qfree(v20);
    }
LABEL_17:
    *(_BYTE *)(a2 + 112) = 1;
    goto LABEL_3;
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20);
  }
  return 0;
}

