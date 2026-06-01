__int64 __fastcall sub_188F0(__int64 a1, __int64 a2)
{
  const char *v3; // rsi
  __int64 v4; // rbp
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int64 *v9; // rdi
  __int64 v10; // r14
  unsigned int v11; // r13d
  int (__fastcall *v12)(__int64, _QWORD, _QWORD, __int64, _QWORD); // r15
  unsigned int v13; // eax
  __int64 v14; // rdi
  unsigned int v15; // ebp
  __int64 v16; // r12
  __int64 v17; // rbx
  __int64 v18; // rax
  unsigned int v20; // eax
  unsigned int v21; // [rsp+Ch] [rbp-8Ch] BYREF
  __int64 v22; // [rsp+10h] [rbp-88h] BYREF
  __int128 v23; // [rsp+18h] [rbp-80h]
  int v24; // [rsp+30h] [rbp-68h] BYREF
  __int64 v25; // [rsp+38h] [rbp-60h]
  __int128 v26; // [rsp+40h] [rbp-58h]
  unsigned __int64 v27; // [rsp+58h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v3 = s;
  v4 = sub_AB30();
  if ( *(_QWORD *)(a1 + 16) )
    v3 = *(const char **)(a1 + 8);
  v5 = (*(__int64 (__fastcall **)(__int64, const char *, unsigned int *))(*(_QWORD *)v4 + 488LL))(v4, v3, &v21);
  v6 = v5;
  if ( v5 < 0 )
    goto LABEL_22;
  v7 = *(_QWORD *)(v4 + 680);
  v8 = (int)v7;
  if ( !v7 )
    v8 = *(int *)(v4 + 776);
  if ( (int)v6 >= (int)v8 )
  {
LABEL_22:
    if ( !under_debugger )
      interr();
    BUG();
  }
  v9 = &v22;
  v22 = 0;
  v23 = 0;
  v24 = -2;
  v25 = -1;
  v26 = 0;
  sub_168E0(&v22, v8, (__int64)&v24);
  if ( v24 >= -1 )
  {
    v9 = (__int64 *)v25;
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree();
    }
  }
  v10 = v22;
  v11 = v21;
  v12 = *(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v4 + 224LL);
  v13 = sub_AB80(v9);
  if ( v12(v4, v13, v11, v10, 0) <= 0 )
  {
    v20 = throw_idc_exception();
    v14 = v22;
    v15 = v20;
  }
  else
  {
    v14 = v22;
    v15 = 0;
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(v22 + 32 * v6 + 8);
  }
  if ( v14 )
  {
    v16 = v23;
    if ( (_QWORD)v23 )
    {
      v17 = 0;
      do
      {
        v18 = v14 + 32 * v17;
        if ( *(int *)v18 >= -1 && *(_QWORD *)(v18 + 8) )
        {
          *(_QWORD *)(v18 + 16) = 0;
          qfree();
          v14 = v22;
        }
        ++v17;
      }
      while ( v16 != v17 );
    }
    *(_QWORD *)&v23 = 0;
    qfree();
  }
  return v15;
}

