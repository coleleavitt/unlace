__int64 __fastcall sub_2FEE60(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // r13
  __int64 v5; // rdi
  __int64 v6; // rcx
  bool (__fastcall *v7)(__int64); // rax
  __int64 v8; // rax
  int v9; // edx
  int v10; // r15d
  __int64 v11; // rax
  __int64 (__fastcall *v12)(); // rax
  __int64 func; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  bool v18; // al
  __int64 (__fastcall *v19)(__int64, __int64 *); // r8
  __int64 v20; // [rsp+0h] [rbp-88h]
  __int64 v21; // [rsp+8h] [rbp-80h]
  __int64 v22; // [rsp+8h] [rbp-80h]
  __int64 v23; // [rsp+18h] [rbp-70h] BYREF
  __int64 v24; // [rsp+20h] [rbp-68h] BYREF
  __int64 v25; // [rsp+28h] [rbp-60h]
  __int128 v26; // [rsp+30h] [rbp-58h]
  unsigned __int64 v27; // [rsp+48h] [rbp-40h]

  v20 = a2;
  v27 = __readfsqword(0x28u);
  if ( sub_2FED20(a1) )
  {
    v3 = *(_QWORD *)(a1 + 48);
    if ( v3 )
    {
      v4 = 0;
      while ( 1 )
      {
        v12 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 144LL);
        if ( v12 != sub_2FF180 )
        {
          a2 = v4;
          v11 = ((__int64 (__fastcall *)(__int64, unsigned __int64))v12)(a1, v4);
LABEL_11:
          if ( v11 != -1 && v11 == v20 )
            return v4;
          goto LABEL_13;
        }
        v5 = *(int *)(a1 + 8);
        switch_dbctx();
        if ( *(_QWORD *)(a1 + 72) )
          break;
        v5 = *(_QWORD *)(a1 + 80);
        func = get_func();
        if ( func )
        {
          v24 = func;
          v15 = *(_QWORD *)(a1 + 64);
          v26 = 0;
          v25 = 0;
          a2 = *(_QWORD *)(v15 + 112);
          sub_146700(&v23, a2, &v24, nullptr, 1);
          sub_139A80((_QWORD *)(a1 + 72), a2);
          v16 = v23;
          *(_QWORD *)(a1 + 72) = v23;
          if ( v16 )
            ++*(_DWORD *)(v16 + 104);
          sub_139A80(&v23, a2);
          if ( v25 )
          {
            *(_QWORD *)&v26 = 0;
            qfree();
          }
          v5 = *(_QWORD *)(a1 + 72);
          if ( !v5 )
            goto LABEL_13;
          sub_250E60(v5, a2, v17);
        }
        if ( *(_QWORD *)(a1 + 72) )
          break;
LABEL_13:
        if ( v3 == ++v4 )
          return -1;
      }
      if ( v4 >= *(_QWORD *)(a1 + 48) )
        sub_2A6A80(v5);
      v6 = *(_QWORD *)(a1 + 40) + 192 * v4;
      v7 = **(bool (__fastcall ***)(__int64))v6;
      if ( v7 == sub_2A5D40 )
      {
        if ( *(_DWORD *)(v6 + 40) != 1 )
          goto LABEL_13;
        v8 = *(_QWORD *)(a1 + 72);
        v23 = v8;
        if ( v8 )
        {
LABEL_9:
          v9 = *(_DWORD *)(v8 + 104);
          a2 = (unsigned int)(v9 + 1);
          *(_DWORD *)(v8 + 104) = a2;
          v10 = *(_DWORD *)(v6 + 184);
          if ( v10 != -2 )
          {
LABEL_10:
            sub_139A80(&v23, a2);
            v11 = v10;
            if ( v10 == -1 )
              goto LABEL_13;
            goto LABEL_11;
          }
          v19 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 16LL);
          v24 = v8;
          *(_DWORD *)(v8 + 104) = v9 + 2;
LABEL_32:
          v22 = v6;
          a2 = (__int64)&v24;
          *(_DWORD *)(v6 + 184) = v19(v6, &v24);
          sub_139A80(&v24, (__int64)&v24);
          v10 = *(_DWORD *)(v22 + 184);
          goto LABEL_10;
        }
      }
      else
      {
        v21 = *(_QWORD *)(a1 + 40) + 192 * v4;
        v18 = v7(v6);
        v6 = v21;
        if ( !v18 )
          goto LABEL_13;
        v8 = *(_QWORD *)(a1 + 72);
        v23 = v8;
        if ( v8 )
          goto LABEL_9;
      }
      v10 = *(_DWORD *)(v6 + 184);
      if ( v10 != -2 )
        goto LABEL_10;
      v19 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 16LL);
      v24 = 0;
      goto LABEL_32;
    }
  }
  return -1;
}

