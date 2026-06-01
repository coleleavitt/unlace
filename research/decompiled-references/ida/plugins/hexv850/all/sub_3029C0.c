__int64 __fastcall sub_3029C0(__int64 a1, __int64 *a2)
{
  __int64 *v3; // r12
  __int64 v4; // rbp
  __int64 *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r8
  bool (__fastcall *v8)(__int64); // rax
  __int64 v9; // rdi
  int v10; // eax
  int v11; // r15d
  __int64 v12; // rax
  __int64 (__fastcall *v13)(); // rax
  __int64 func; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  bool v19; // al
  __int64 (__fastcall *v20)(__int64, __int64 *); // rdx
  __int64 v21; // rsi
  int v22; // eax
  __int64 *v23; // [rsp+0h] [rbp-98h]
  __int64 v24; // [rsp+8h] [rbp-90h]
  __int64 v25; // [rsp+8h] [rbp-90h]
  __int64 v26; // [rsp+8h] [rbp-90h]
  __int64 v27; // [rsp+8h] [rbp-90h]
  int v28; // [rsp+1Ch] [rbp-7Ch] BYREF
  __int64 v29; // [rsp+20h] [rbp-78h] BYREF
  __int64 v30; // [rsp+28h] [rbp-70h] BYREF
  __int64 v31; // [rsp+30h] [rbp-68h] BYREF
  __int64 v32; // [rsp+38h] [rbp-60h]
  __int128 v33; // [rsp+40h] [rbp-58h]
  unsigned __int64 v34; // [rsp+58h] [rbp-40h]

  v23 = a2;
  v34 = __readfsqword(0x28u);
  if ( sub_302880(a1) )
  {
    v3 = *(__int64 **)(a1 + 48);
    if ( v3 )
    {
      v4 = 0;
      v5 = nullptr;
      while ( 1 )
      {
        v13 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 144LL);
        if ( v13 != sub_302D80 )
        {
          a2 = v5;
          v12 = ((__int64 (__fastcall *)(__int64, __int64 *))v13)(a1, v5);
LABEL_11:
          if ( v12 != -1 && (__int64 *)v12 == v23 )
            return (__int64)v5;
          goto LABEL_13;
        }
        v6 = *(int *)(a1 + 8);
        switch_dbctx();
        if ( *(_QWORD *)(a1 + 72) )
          break;
        v6 = *(_QWORD *)(a1 + 80);
        func = get_func();
        if ( func )
        {
          v31 = func;
          v16 = *(_QWORD *)(a1 + 64);
          v33 = 0;
          v32 = 0;
          a2 = *(__int64 **)(v16 + 112);
          sub_148200(&v30, (__int64)a2, &v31, nullptr, 1);
          sub_13B580((_QWORD *)(a1 + 72), (__int64)a2);
          v17 = v30;
          *(_QWORD *)(a1 + 72) = v30;
          if ( v17 )
            ++*(_DWORD *)(v17 + 104);
          sub_13B580(&v30, (__int64)a2);
          if ( v32 )
          {
            *(_QWORD *)&v33 = 0;
            qfree();
          }
          v6 = *(_QWORD *)(a1 + 72);
          if ( !v6 )
            goto LABEL_13;
          sub_252E20(v6, (__int64)a2, v18);
        }
        if ( *(_QWORD *)(a1 + 72) )
          break;
LABEL_13:
        v5 = (__int64 *)((char *)v5 + 1);
        v4 += 56;
        if ( v3 == v5 )
          return -1;
      }
      if ( (unsigned __int64)v5 >= *(_QWORD *)(a1 + 48) )
        sub_2A8A40(v6);
      v7 = v4 + *(_QWORD *)(a1 + 40);
      v8 = **(bool (__fastcall ***)(__int64))v7;
      if ( v8 == sub_2A7DB0 )
      {
        if ( *(_QWORD *)(v7 + 8) == *(_QWORD *)(v7 + 40) )
          goto LABEL_13;
        v9 = *(_QWORD *)(a1 + 72);
        v29 = v9;
        if ( v9 )
        {
LABEL_9:
          v10 = *(_DWORD *)(v9 + 104);
          *(_DWORD *)(v9 + 104) = v10 + 1;
          v11 = *(_DWORD *)(v7 + 48);
          if ( v11 != -2 )
          {
LABEL_10:
            sub_13B580(&v29, (__int64)a2);
            v12 = v11;
            if ( v11 == -1 )
              goto LABEL_13;
            goto LABEL_11;
          }
          v20 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 16LL);
          v30 = v9;
          *(_DWORD *)(v9 + 104) = v10 + 2;
          if ( v20 == sub_2BCC70 )
          {
            v21 = *(_QWORD *)(v7 + 8);
            v28 = -1;
            if ( v21 != -1 )
            {
              v31 = v9;
              *(_DWORD *)(v9 + 104) = v10 + 3;
              goto LABEL_36;
            }
            goto LABEL_38;
          }
          goto LABEL_39;
        }
      }
      else
      {
        v24 = v4 + *(_QWORD *)(a1 + 40);
        v19 = v8(v7);
        v7 = v24;
        if ( !v19 )
          goto LABEL_13;
        v9 = *(_QWORD *)(a1 + 72);
        v29 = v9;
        if ( v9 )
          goto LABEL_9;
      }
      v11 = *(_DWORD *)(v7 + 48);
      if ( v11 != -2 )
        goto LABEL_10;
      v20 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 16LL);
      v30 = 0;
      if ( v20 == sub_2BCC70 )
      {
        v21 = *(_QWORD *)(v7 + 8);
        v28 = -1;
        if ( v21 != -1 )
        {
          v31 = 0;
LABEL_36:
          v25 = v7;
          sub_2BB400(v9, v21, 0, (__int64)&v28);
          sub_13B580(&v31, v21);
          a2 = &v30;
          v22 = v28;
          v7 = v25;
LABEL_37:
          *(_DWORD *)(v7 + 48) = v22;
          v26 = v7;
          sub_13B580(&v30, (__int64)&v30);
          v11 = *(_DWORD *)(v26 + 48);
          goto LABEL_10;
        }
LABEL_38:
        a2 = &v30;
        v22 = -1;
        goto LABEL_37;
      }
LABEL_39:
      v27 = v7;
      a2 = &v30;
      v22 = v20(v7, &v30);
      v7 = v27;
      goto LABEL_37;
    }
  }
  return -1;
}

