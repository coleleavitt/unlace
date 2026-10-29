__int64 __fastcall sub_303260(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbp
  __int64 *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // r12
  bool (__fastcall *v7)(__int64); // rax
  __int64 v8; // rdi
  int v9; // eax
  int v10; // r15d
  __int64 v11; // rax
  __int64 (__fastcall *v12)(); // rax
  __int64 func; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 (__fastcall *v18)(__int64, __int64 *); // rdx
  int v19; // eax
  __int64 *v20; // [rsp+0h] [rbp-98h]
  __int64 *v21; // [rsp+8h] [rbp-90h]
  int v22; // [rsp+1Ch] [rbp-7Ch] BYREF
  __int64 v23; // [rsp+20h] [rbp-78h] BYREF
  __int64 v24; // [rsp+28h] [rbp-70h] BYREF
  __int64 v25; // [rsp+30h] [rbp-68h] BYREF
  __int64 v26; // [rsp+38h] [rbp-60h]
  __int128 v27; // [rsp+40h] [rbp-58h]
  unsigned __int64 v28; // [rsp+58h] [rbp-40h]

  v21 = a2;
  v28 = __readfsqword(0x28u);
  if ( sub_303120(a1) )
  {
    v20 = *(__int64 **)(a1 + 48);
    if ( v20 )
    {
      v3 = 0;
      v4 = nullptr;
      while ( 1 )
      {
        v12 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 144LL);
        if ( v12 != sub_303640 )
          break;
        v5 = *(int *)(a1 + 8);
        switch_dbctx();
        if ( *(_QWORD *)(a1 + 72) )
          goto LABEL_5;
        v5 = *(_QWORD *)(a1 + 80);
        func = get_func();
        if ( func )
        {
          v25 = func;
          v15 = *(_QWORD *)(a1 + 64);
          v27 = 0;
          v26 = 0;
          a2 = *(__int64 **)(v15 + 112);
          sub_149380(&v24, (__int64)a2, &v25, nullptr, 1);
          sub_13C700((_QWORD *)(a1 + 72), (__int64)a2);
          v16 = v24;
          *(_QWORD *)(a1 + 72) = v24;
          if ( v16 )
            ++*(_DWORD *)(v16 + 104);
          sub_13C700(&v24, (__int64)a2);
          if ( v26 )
          {
            *(_QWORD *)&v27 = 0;
            qfree();
          }
          v5 = *(_QWORD *)(a1 + 72);
          if ( !v5 )
            goto LABEL_13;
          sub_254560(v5, (__int64)a2, v17);
        }
        if ( *(_QWORD *)(a1 + 72) )
        {
LABEL_5:
          if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 48) )
            sub_2AA180(v5);
          v6 = v3 + *(_QWORD *)(a1 + 40);
          v7 = **(bool (__fastcall ***)(__int64))v6;
          if ( v7 == sub_2AB3C0 )
          {
            if ( *(_DWORD *)(v6 + 120) == *(_DWORD *)(v6 + 248) )
            {
              a2 = (__int64 *)(v6 + 136);
              if ( !(unsigned int)sub_133D60(v6 + 8, v6 + 136) )
                goto LABEL_13;
            }
            v8 = *(_QWORD *)(a1 + 72);
            v23 = v8;
            if ( v8 )
              goto LABEL_9;
LABEL_31:
            v10 = *(_DWORD *)(v6 + 256);
            if ( v10 == -2 )
            {
              v18 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 16LL);
              v24 = 0;
              if ( v18 == sub_2BE570 )
              {
                a2 = *(__int64 **)(v6 + 8);
                v22 = -1;
                if ( a2 != (__int64 *)-1LL )
                {
                  v25 = 0;
                  goto LABEL_38;
                }
LABEL_40:
                v19 = -1;
                goto LABEL_39;
              }
LABEL_41:
              a2 = &v24;
              v19 = v18(v6, &v24);
              goto LABEL_39;
            }
          }
          else
          {
            if ( !v7(v3 + *(_QWORD *)(a1 + 40)) )
              goto LABEL_13;
            v8 = *(_QWORD *)(a1 + 72);
            v23 = v8;
            if ( !v8 )
              goto LABEL_31;
LABEL_9:
            v9 = *(_DWORD *)(v8 + 104);
            *(_DWORD *)(v8 + 104) = v9 + 1;
            v10 = *(_DWORD *)(v6 + 256);
            if ( v10 == -2 )
            {
              v18 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 16LL);
              v24 = v8;
              *(_DWORD *)(v8 + 104) = v9 + 2;
              if ( v18 != sub_2BE570 )
                goto LABEL_41;
              a2 = *(__int64 **)(v6 + 8);
              v22 = -1;
              if ( a2 == (__int64 *)-1LL )
                goto LABEL_40;
              v25 = v8;
              *(_DWORD *)(v8 + 104) = v9 + 3;
LABEL_38:
              sub_2BCB40(v8, (__int64)a2, 0, (__int64)&v22);
              sub_13C700(&v25, (__int64)a2);
              v19 = v22;
LABEL_39:
              *(_DWORD *)(v6 + 256) = v19;
              sub_13C700(&v24, (__int64)a2);
              v10 = *(_DWORD *)(v6 + 256);
            }
          }
          sub_13C700(&v23, (__int64)a2);
          v11 = v10;
          if ( v10 == -1 )
            goto LABEL_13;
LABEL_11:
          if ( v11 != -1 && (__int64 *)v11 == v21 )
            return (__int64)v4;
        }
LABEL_13:
        v4 = (__int64 *)((char *)v4 + 1);
        v3 += 264;
        if ( v20 == v4 )
          return -1;
      }
      a2 = v4;
      v11 = ((__int64 (__fastcall *)(__int64, __int64 *))v12)(a1, v4);
      goto LABEL_11;
    }
  }
  return -1;
}

