unsigned __int64 __fastcall sub_38B290(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v6; // rdi
  __int64 v8; // rdx
  int v9; // r10d
  char *v11; // rsi
  bool v12; // sf
  bool v13; // of
  unsigned __int64 *v14; // rdi
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r13
  __int64 v17; // rax
  unsigned __int64 *v18; // rax
  __int64 v19; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 v20; // [rsp+8h] [rbp-80h]
  __int64 v21; // [rsp+10h] [rbp-78h]
  __int64 v22; // [rsp+18h] [rbp-70h]
  int v23; // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v24; // [rsp+28h] [rbp-60h]
  int v25; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-40h]
  unsigned __int64 v27; // [rsp+58h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  v3 = *(_DWORD *)(*(_QWORD *)(a2 + 40) + 12LL);
  if ( v3 >= 0 )
  {
    v6 = *(_QWORD *)(a3 + 32);
    if ( (unsigned __int64)(unsigned int)v3 < *(_QWORD *)(v6 + 136) )
    {
      v8 = *(_QWORD *)(v6 + 128) + 32LL * (unsigned int)v3;
      v9 = *(__int16 *)(a2 + 28);
      v11 = (char *)s1;
      if ( *(_QWORD *)(v8 + 8) )
        v11 = *(char **)v8;
      v13 = __OFSUB__(v3, *(_DWORD *)(v6 + 152));
      v12 = v3 - *(_DWORD *)(v6 + 152) < 0;
      LODWORD(v19) = 0;
      v23 = 0;
      v25 = 0;
      sub_38A790(v6, v11, v9, v12 == v13, (__int64)&v19, (__int64)&v23, (__int64)&v25);
      v14 = *(unsigned __int64 **)(a3 + 32);
      v15 = *v14;
      if ( v23 == 1 )
      {
        v18 = sub_2572F0((__int64)v14, v24);
        if ( v18 )
          v15 = *v18;
      }
      else if ( v25 == 4 )
      {
        v15 = v26;
      }
      else if ( (_DWORD)v19 == 4 )
      {
        v15 = v20;
      }
      v16 = sub_330F80(*(_QWORD **)(a3 + 24), v15);
      if ( v16 != -1
        || (v17 = callui(56, a1, 0, 0, 0, &callui, v19, v20, v21, v22)) != 0 && (v16 = *(_QWORD *)(v17 + 24), v16 != -1) )
      {
        if ( (unsigned __int8)sub_389B80(a3, v16) )
          *(_QWORD *)(*(_QWORD *)(a2 + 40) + 24LL) = v16;
      }
    }
  }
  return v27 - __readfsqword(0x28u);
}

