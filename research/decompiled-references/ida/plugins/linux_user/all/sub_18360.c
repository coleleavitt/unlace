__int64 __fastcall sub_18360(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v4; // rdi
  int v6; // edx
  const char *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r15
  char v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 result; // rax
  char *v16; // rdx
  _DWORD *v17; // rbx
  __int64 v18; // rax
  bool v19; // zf
  unsigned int v20; // [rsp+Ch] [rbp-48Ch]
  __int64 v21; // [rsp+18h] [rbp-480h] BYREF
  const char *v22; // [rsp+20h] [rbp-478h] BYREF
  __int128 v23; // [rsp+28h] [rbp-470h]
  char v24; // [rsp+58h] [rbp-440h]
  _BYTE v25[1016]; // [rsp+60h] [rbp-438h] BYREF
  unsigned __int64 v26; // [rsp+458h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 276) != 8 || *(_QWORD *)(a1 + 1312) <= 1u )
    return 0xFFFFFFFFLL;
  v4 = *(_QWORD *)(a1 + 1328);
  if ( v4 )
  {
    v6 = *(_DWORD *)(v4 + 224);
    v22 = nullptr;
    v23 = 0;
    if ( v6 )
    {
LABEL_5:
      v7 = s;
      goto LABEL_6;
    }
    goto LABEL_15;
  }
  v18 = operator new(0xE8u);
  v19 = *(_QWORD *)(a1 + 1312) == 0;
  v4 = v18;
  *(_QWORD *)(v18 + 16) = 0;
  *(_QWORD *)(v18 + 72) = 0;
  *(_QWORD *)(v18 + 80) = 0;
  *(_OWORD *)v18 = 0;
  *(_OWORD *)(v18 + 24) = 0;
  *(_OWORD *)(v18 + 40) = 0;
  *(_OWORD *)(v18 + 56) = 0;
  *(_QWORD *)(v18 + 96) = "_Ux86_64_init_remote";
  *(_QWORD *)(v18 + 104) = v18 + 24;
  *(_QWORD *)(v18 + 112) = "_Ux86_64_step";
  *(_QWORD *)(v18 + 120) = v18 + 32;
  *(_QWORD *)(v18 + 128) = "_Ux86_64_get_reg";
  *(_QWORD *)(v18 + 136) = v18 + 40;
  *(_QWORD *)(v18 + 144) = "_Ux86_64_create_addr_space";
  *(_QWORD *)(v18 + 152) = v18 + 48;
  *(_QWORD *)(v18 + 160) = "_Ux86_64_destroy_addr_space";
  *(_QWORD *)(v18 + 168) = v18 + 56;
  *(_QWORD *)(v18 + 176) = "_UPT_create";
  *(_QWORD *)(v18 + 184) = v18 + 64;
  *(_QWORD *)(v18 + 192) = "_UPT_destroy";
  *(_QWORD *)(v18 + 200) = v18 + 72;
  *(_QWORD *)(v18 + 208) = "_UPT_accessors";
  *(_QWORD *)(v18 + 216) = v18 + 80;
  *(_DWORD *)(v18 + 224) = 0;
  *(_QWORD *)(a1 + 1328) = v18;
  v22 = nullptr;
  v23 = 0;
  if ( !v19 )
  {
LABEL_15:
    v16 = *(char **)(a1 + 1304);
    goto LABEL_16;
  }
  v16 = (char *)s;
LABEL_16:
  sub_18210(v4, (__int64 *)&v22, v16, a2);
  if ( !(_QWORD)v23 )
    goto LABEL_5;
  v7 = v22;
LABEL_6:
  sub_143D0(a1, (__int64)"%s\n", v7);
  v8 = *(_QWORD *)(a1 + 1328);
  if ( *(_DWORD *)(v8 + 224) == -1 )
  {
    if ( v8 )
      operator delete(*(void **)(a1 + 1328), 0xE8u);
  }
  else
  {
    if ( !(*(unsigned int (__fastcall **)(_BYTE *, _QWORD, _QWORD))(v8 + 24))(
            v25,
            *(_QWORD *)(v8 + 88),
            *(_QWORD *)(v8 + 16)) )
    {
      do
      {
        if ( (*(unsigned int (__fastcall **)(_BYTE *, __int64, __int64 *))(*(_QWORD *)(a1 + 1328) + 40LL))(
               v25,
               16,
               &v21) )
        {
          sub_143D0(a1, (__int64)"libunwind: failed to retrieve stack trace\n");
          goto LABEL_19;
        }
        v10 = a3[1];
        v11 = v21;
        v12 = v24;
        v13 = *a3;
        if ( a3[2] < (unsigned __int64)(v10 + 1) )
        {
          v14 = qvector_reserve();
          *a3 = v14;
          v13 = v14;
          v10 = a3[1];
        }
        v9 = 32 * v10 + v13;
        *(_QWORD *)v9 = v11;
        *(_QWORD *)(v9 + 8) = -1;
        *(_QWORD *)(v9 + 16) = -1;
        *(_BYTE *)(v9 + 24) = v12;
        ++a3[1];
      }
      while ( (*(int (__fastcall **)(_BYTE *))(*(_QWORD *)(a1 + 1328) + 32LL))(v25) > 0 );
      result = 1;
      goto LABEL_24;
    }
    sub_143D0(a1, (__int64)"libunwind: failed to initialize remote context\n");
LABEL_19:
    v17 = *(_DWORD **)(a1 + 1328);
    if ( v17 )
    {
      if ( v17[56] == 1 )
        sub_11340(*(_QWORD *)(a1 + 1328));
      operator delete(v17, 0xE8u);
    }
  }
  *(_QWORD *)(a1 + 1328) = 0;
  result = 0xFFFFFFFFLL;
LABEL_24:
  if ( v22 )
  {
    v20 = result;
    *(_QWORD *)&v23 = 0;
    qfree();
    return v20;
  }
  return result;
}

