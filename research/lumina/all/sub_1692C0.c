void *__fastcall sub_1692C0(__int64 a1, char a2)
{
  __int64 (*v3)(void); // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // r13d
  int v9; // edx
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rax
  void *v13; // r12
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // [rsp+Bh] [rbp-5Dh] BYREF
  char v18; // [rsp+Fh] [rbp-59h]
  char v19[40]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v3 = *(__int64 (**)(void))(*(_QWORD *)a1 + 24LL);
  if ( (char *)v3 == (char *)sub_2C850 )
    v4 = *(_QWORD *)(a1 + 96);
  else
    v4 = v3();
  if ( !v4 || *(_BYTE *)(a1 + 8) )
    return nullptr;
  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 48);
    v7 = 0;
    while ( a2 != *(_BYTE *)v6 )
    {
      ++v7;
      v6 += 8;
      if ( v5 == v7 )
        goto LABEL_19;
    }
    v8 = *(_DWORD *)(v6 + 4);
  }
  else
  {
LABEL_19:
    v8 = *(_DWORD *)(a1 + 64);
  }
  if ( (unsigned int)sub_168CB0((__int64 *)a1, (__int64)&v17, 5, v8) )
    return nullptr;
  v9 = _byteswap_ulong(v17);
  v17 = v9;
  if ( v9 < 0 || *(_BYTE *)(a1 + 69) != 1 && v9 > 0x2000 )
  {
    v15 = sub_199140(a1, &v17);
    sub_1677A0((__int64)v19, 25, v15, 0);
    sub_169170((__int64)"%s rpc: bad packet length", v19);
    return nullptr;
  }
  v10 = (unsigned int)v9;
  v11 = (unsigned int)v9 + 5LL;
  v12 = sub_198620(v11);
  v13 = (void *)v12;
  if ( !v12 )
  {
    v16 = sub_199140(v11, &v17);
    sub_1677A0((__int64)v19, 25, v16, 0);
    sub_169170((__int64)"%s rpc: no local memory", v19);
    return nullptr;
  }
  *(_DWORD *)v12 = v17;
  *(_BYTE *)(v12 + 4) = v18;
  if ( (unsigned int)sub_168CB0((__int64 *)a1, v12 + 5, v10, v8) )
  {
    j__free(v13);
    return nullptr;
  }
  return v13;
}
