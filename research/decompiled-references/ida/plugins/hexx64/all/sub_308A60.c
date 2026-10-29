unsigned __int64 __fastcall sub_308A60(__int64 a1, __int64 *a2, __m128i a3, double a4, __m128i a5, double a6)
{
  __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  __int64 v9; // r12
  bool (__fastcall *v10)(__int64); // rax
  __int64 v11; // rdi
  int v12; // eax
  int v13; // r15d
  __int64 *v14; // rax
  __int64 (__fastcall *v15)(_QWORD *, unsigned __int64); // rax
  __int64 *func; // rax
  __int64 v18; // rax
  __int64 *v19; // rax
  __m128i *v20; // rdi
  __int64 (__fastcall *v21)(__int64, __int64 *, __m128i); // rdx
  __int64 v22; // rsi
  int v23; // eax
  __int64 v24; // [rsp+0h] [rbp-98h]
  int v26; // [rsp+1Ch] [rbp-7Ch] BYREF
  __int64 *v27; // [rsp+20h] [rbp-78h] BYREF
  __int64 *v28; // [rsp+28h] [rbp-70h] BYREF
  __int64 *v29; // [rsp+30h] [rbp-68h] BYREF
  __int64 v30; // [rsp+38h] [rbp-60h]
  __int128 v31; // [rsp+40h] [rbp-58h]
  unsigned __int64 v32; // [rsp+58h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  if ( sub_308920(a1, *(double *)a3.m128i_i64, a4, a5, a6) )
  {
    v24 = *(_QWORD *)(a1 + 48);
    if ( v24 )
    {
      v7 = 0;
      v8 = 0;
      while ( 1 )
      {
        v15 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int64))(*(_QWORD *)a1 + 144LL);
        if ( v15 != sub_308E10 )
        {
          v14 = (__int64 *)v15((_QWORD *)a1, v8);
LABEL_11:
          if ( v14 != (__int64 *)-1LL && v14 == a2 )
            return v8;
          goto LABEL_13;
        }
        switch_dbctx();
        if ( *(_QWORD *)(a1 + 72) )
          break;
        func = (__int64 *)get_func();
        if ( func )
        {
          v29 = func;
          v18 = *(_QWORD *)(a1 + 64);
          a3 = 0;
          v31 = 0;
          v30 = 0;
          sub_14CDC0((__int64 *)&v28, *(_QWORD *)(v18 + 112), &v29, nullptr, 1, 0.0, a4, a5, a6);
          sub_140140((__int64 **)(a1 + 72));
          v19 = v28;
          *(_QWORD *)(a1 + 72) = v28;
          if ( v19 )
            ++*((_DWORD *)v19 + 26);
          sub_140140(&v28);
          if ( v30 )
          {
            *(_QWORD *)&v31 = 0;
            qfree(v30);
          }
          v20 = *(__m128i **)(a1 + 72);
          if ( !v20 )
            goto LABEL_13;
          sub_2581E0(v20);
        }
        if ( *(_QWORD *)(a1 + 72) )
          break;
LABEL_13:
        ++v8;
        v7 += 56;
        if ( v24 == v8 )
          return -1;
      }
      if ( v8 >= *(_QWORD *)(a1 + 48) )
        sub_2ADE00(*(double *)a3.m128i_i64);
      v9 = v7 + *(_QWORD *)(a1 + 40);
      v10 = **(bool (__fastcall ***)(__int64))v9;
      if ( v10 == sub_2AD590 )
      {
        if ( !(unsigned int)sub_257C70(v9 + 8, v9 + 32) )
          goto LABEL_13;
        v11 = *(_QWORD *)(a1 + 72);
        v27 = (__int64 *)v11;
        if ( v11 )
        {
LABEL_9:
          v12 = *(_DWORD *)(v11 + 104);
          *(_DWORD *)(v11 + 104) = v12 + 1;
          v13 = *(_DWORD *)(v9 + 48);
          if ( v13 != -2 )
          {
LABEL_10:
            sub_140140(&v27);
            v14 = (__int64 *)v13;
            if ( v13 == -1 )
              goto LABEL_13;
            goto LABEL_11;
          }
          v21 = *(__int64 (__fastcall **)(__int64, __int64 *, __m128i))(*(_QWORD *)v9 + 16LL);
          v28 = (__int64 *)v11;
          *(_DWORD *)(v11 + 104) = v12 + 2;
          if ( v21 == sub_2C1F50 )
          {
            v22 = *(_QWORD *)(v9 + 8);
            v26 = -1;
            if ( v22 != -1 )
            {
              v29 = (__int64 *)v11;
              *(_DWORD *)(v11 + 104) = v12 + 3;
              goto LABEL_36;
            }
            goto LABEL_38;
          }
          goto LABEL_39;
        }
      }
      else
      {
        if ( !v10(v7 + *(_QWORD *)(a1 + 40)) )
          goto LABEL_13;
        v11 = *(_QWORD *)(a1 + 72);
        v27 = (__int64 *)v11;
        if ( v11 )
          goto LABEL_9;
      }
      v13 = *(_DWORD *)(v9 + 48);
      if ( v13 != -2 )
        goto LABEL_10;
      v21 = *(__int64 (__fastcall **)(__int64, __int64 *, __m128i))(*(_QWORD *)v9 + 16LL);
      v28 = nullptr;
      if ( v21 == sub_2C1F50 )
      {
        v22 = *(_QWORD *)(v9 + 8);
        v26 = -1;
        if ( v22 != -1 )
        {
          v29 = nullptr;
LABEL_36:
          sub_2C07C0(v11, v22, nullptr, &v26, a3);
          sub_140140(&v29);
          v23 = v26;
LABEL_37:
          *(_DWORD *)(v9 + 48) = v23;
          sub_140140(&v28);
          v13 = *(_DWORD *)(v9 + 48);
          goto LABEL_10;
        }
LABEL_38:
        v23 = -1;
        goto LABEL_37;
      }
LABEL_39:
      v23 = ((__int64 (__fastcall *)(__int64, __int64 **))v21)(v9, &v28);
      goto LABEL_37;
    }
  }
  return -1;
}

