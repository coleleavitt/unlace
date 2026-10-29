unsigned __int64 __fastcall sub_3098A0(__int64 a1, __int64 a2, double a3, double a4, __m128i a5, double a6)
{
  __int64 v7; // rbp
  unsigned __int64 v8; // r13
  __int64 v9; // rcx
  bool (__fastcall *v10)(__int64); // rax
  __int64 v11; // rax
  int v12; // edx
  int v13; // r15d
  __int64 v14; // rax
  __int64 (__fastcall *v15)(_QWORD *, unsigned __int64); // rax
  __int64 (__fastcall *v17)(__int64, __int64 **); // r8
  __int64 *func; // rax
  __int64 v19; // rax
  __int64 *v20; // rax
  __m128i *v21; // rdi
  bool v22; // al
  __int64 v23; // [rsp+8h] [rbp-80h]
  __int64 v24; // [rsp+8h] [rbp-80h]
  __int64 *v25; // [rsp+18h] [rbp-70h] BYREF
  __int64 *v26; // [rsp+20h] [rbp-68h] BYREF
  __int64 v27; // [rsp+28h] [rbp-60h]
  __int128 v28; // [rsp+30h] [rbp-58h]
  unsigned __int64 v29; // [rsp+48h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( sub_309760(a1, a3, a4, a5, a6) )
  {
    v7 = *(_QWORD *)(a1 + 48);
    if ( v7 )
    {
      v8 = 0;
      while ( 1 )
      {
        v15 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int64))(*(_QWORD *)a1 + 144LL);
        if ( v15 != sub_309BB0 )
          break;
        switch_dbctx();
        if ( *(_QWORD *)(a1 + 72) )
          goto LABEL_5;
        func = (__int64 *)get_func();
        if ( func )
        {
          v26 = func;
          v19 = *(_QWORD *)(a1 + 64);
          a3 = 0.0;
          v28 = 0;
          v27 = 0;
          sub_14CDC0((__int64 *)&v25, *(_QWORD *)(v19 + 112), &v26, nullptr, 1, 0.0, a4, a5, a6);
          sub_140140((__int64 **)(a1 + 72));
          v20 = v25;
          *(_QWORD *)(a1 + 72) = v25;
          if ( v20 )
            ++*((_DWORD *)v20 + 26);
          sub_140140(&v25);
          if ( v27 )
          {
            *(_QWORD *)&v28 = 0;
            qfree(v27);
          }
          v21 = *(__m128i **)(a1 + 72);
          if ( !v21 )
            goto LABEL_13;
          sub_2581E0(v21);
        }
        if ( *(_QWORD *)(a1 + 72) )
        {
LABEL_5:
          if ( v8 >= *(_QWORD *)(a1 + 48) )
            sub_2ADE00(a3);
          v9 = *(_QWORD *)(a1 + 40) + 80 * v8;
          v10 = **(bool (__fastcall ***)(__int64))v9;
          if ( v10 == sub_2AD100 )
          {
            if ( *(_QWORD *)(v9 + 8) != *(_QWORD *)(v9 + 56) )
              goto LABEL_8;
            if ( *(_DWORD *)(v9 + 16) == *(_DWORD *)(v9 + 64) )
              goto LABEL_13;
            v11 = *(_QWORD *)(a1 + 72);
            v25 = (__int64 *)v11;
            if ( !v11 )
              goto LABEL_20;
LABEL_9:
            v12 = *(_DWORD *)(v11 + 104);
            *(_DWORD *)(v11 + 104) = v12 + 1;
            v13 = *(_DWORD *)(v9 + 72);
            if ( v13 != -2 )
              goto LABEL_10;
            v17 = *(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v9 + 16LL);
            v26 = (__int64 *)v11;
            *(_DWORD *)(v11 + 104) = v12 + 2;
LABEL_34:
            v24 = v9;
            *(_DWORD *)(v9 + 72) = v17(v9, &v26);
            sub_140140(&v26);
            v13 = *(_DWORD *)(v24 + 72);
            goto LABEL_10;
          }
          v23 = *(_QWORD *)(a1 + 40) + 80 * v8;
          v22 = v10(v9);
          v9 = v23;
          if ( !v22 )
            goto LABEL_13;
LABEL_8:
          v11 = *(_QWORD *)(a1 + 72);
          v25 = (__int64 *)v11;
          if ( v11 )
            goto LABEL_9;
LABEL_20:
          v13 = *(_DWORD *)(v9 + 72);
          if ( v13 == -2 )
          {
            v17 = *(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v9 + 16LL);
            v26 = nullptr;
            goto LABEL_34;
          }
LABEL_10:
          sub_140140(&v25);
          v14 = v13;
          if ( v13 == -1 )
            goto LABEL_13;
LABEL_11:
          if ( v14 != -1 && v14 == a2 )
            return v8;
        }
LABEL_13:
        if ( v7 == ++v8 )
          return -1;
      }
      v14 = v15((_QWORD *)a1, v8);
      goto LABEL_11;
    }
  }
  return -1;
}

