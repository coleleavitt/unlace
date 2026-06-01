unsigned __int64 __fastcall sub_2680C0(_QWORD *a1, void **a2, unsigned int a3, _QWORD *a4, char a5)
{
  __int64 v6; // rax
  unsigned __int64 v8; // rbp
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  const char *v11; // r14
  int v12; // r13d
  __int64 v14; // rdx
  __int64 v15; // rsi
  const char *v16; // rax
  const char *v17; // rcx
  __int64 module_data; // [rsp+8h] [rbp-90h]
  unsigned int v20; // [rsp+18h] [rbp-80h]
  const char *v22; // [rsp+20h] [rbp-78h] BYREF
  __int128 v23; // [rsp+28h] [rbp-70h]
  const char *v24; // [rsp+40h] [rbp-58h] BYREF
  __int128 v25; // [rsp+48h] [rbp-50h]
  unsigned __int64 v26; // [rsp+58h] [rbp-40h]

  v6 = a4[5];
  v26 = __readfsqword(0x28u);
  if ( v6 )
    module_data = *(_QWORD *)(v6 + 216);
  else
    module_data = get_module_data();
  if ( a5 )
  {
    sub_262740(a2, module_data, 0, a3, byte_4191D0, a4, 0x46u);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a4)(a4, a3, &unk_4191DD);
    if ( a1[4] )
    {
      v8 = 0;
      v20 = a3 + 8;
      while ( 1 )
      {
        v9 = a1[3] + 88 * v8;
        v10 = *(_QWORD *)(v9 + 72);
        if ( *(_DWORD *)(v9 + 8) )
          break;
        if ( v10 > 1 )
        {
          v22 = nullptr;
          v23 = 0;
          goto LABEL_9;
        }
        (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a4)(a4, 0, &unk_4191EE);
        v12 = a3 + 11;
LABEL_13:
        if ( ++v8 < a1[4] )
        {
          sub_262740(a2, module_data, v12, 0, byte_4191CA, a4, v8);
          (*(void (__fastcall **)(_QWORD *, _QWORD, void *, _QWORD))*a4)(a4, v20, &unk_418793, *a4);
          if ( v8 < a1[4] )
            continue;
        }
        goto LABEL_14;
      }
      v22 = nullptr;
      v23 = 0;
      if ( v10 > 1 || (sub_32B7F0((__int64 *)&v22, v9 + 48, nullptr), *(_QWORD *)(v9 + 72) > 1u) )
      {
LABEL_9:
        v11 = *(const char **)(v9 + 64);
      }
      else
      {
        v11 = s1;
        if ( (_QWORD)v23 )
          v11 = v22;
      }
      (*(void (__fastcall **)(_QWORD *, _QWORD, void *, const char *))*a4)(a4, 0, &unk_4191F6, v11);
      v12 = v20 + tag_strlen();
      if ( *(_DWORD *)(v9 + 8) )
      {
        v14 = a4[5];
        v24 = nullptr;
        v25 = 0;
        sub_267FE0(v9, (__int64)&v24, v14);
        v15 = 0;
        v16 = &v11[strlen(v11)];
        if ( v11 < v16 )
          v15 = (unsigned __int8)sub_32E540((char *)v16 - 1);
        v17 = s1;
        if ( (_QWORD)v25 )
          v17 = v24;
        (*(void (__fastcall **)(_QWORD *, __int64, void *, const char *))*a4)(a4, v15, &unk_4190BD, v17);
        v12 += tag_strlen() + 1;
        if ( v24 )
        {
          *(_QWORD *)&v25 = 0;
          qfree((__int64)v24);
        }
      }
      if ( v22 )
      {
        *(_QWORD *)&v23 = 0;
        qfree((__int64)v22);
      }
      goto LABEL_13;
    }
    v12 = a3 + 11;
    (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a4)(a4, 0, &unk_4191EE);
LABEL_14:
    sub_262740(a2, module_data, v12, 1u, byte_419175, a4, 0x48u);
  }
  return sub_269750(a1, a2, *(_DWORD *)(module_data + 592) + a3, a4, 1);
}

