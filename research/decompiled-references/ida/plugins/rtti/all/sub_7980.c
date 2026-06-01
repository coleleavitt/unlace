__int64 __fastcall sub_7980(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned int a5)
{
  __int64 v5; // r12
  unsigned int v6; // ebx
  unsigned int v10; // eax
  char *v11; // r13
  unsigned int v12; // ebp
  size_t v13; // rax
  size_t v14; // rbx
  void *v15; // rdi
  size_t v16; // r14
  __int64 v17; // rax
  __int128 v18; // [rsp+0h] [rbp-98h] BYREF
  __int64 v19; // [rsp+10h] [rbp-88h]
  __int128 v20; // [rsp+18h] [rbp-80h]
  __int64 v21; // [rsp+28h] [rbp-70h]
  __int128 v22; // [rsp+30h] [rbp-68h]
  char *s; // [rsp+40h] [rbp-58h]
  __int128 v24; // [rsp+48h] [rbp-50h]
  unsigned __int64 v25; // [rsp+58h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v5 = a3;
  LOBYTE(a3) = a3 == 0;
  v6 = a3;
  LOBYTE(v6) = (a4 == -1) | a3;
  if ( (_BYTE)v6 )
    return 0;
  v21 = a1;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v22 = -1;
  v24 = 0;
  s = (char *)qvector_reserve();
  *(_QWORD *)&v24 = 1;
  *s = 0;
  v10 = sub_7690(&v18, a2, a4, a5);
  v11 = s;
  v12 = v10;
  if ( !(_BYTE)v10 )
  {
    v6 = 0;
    goto LABEL_6;
  }
  if ( !(_QWORD)v24 || *s != 46 || s[1] != 63 || !s[2] )
  {
LABEL_6:
    if ( !v11 )
      goto LABEL_8;
    goto LABEL_7;
  }
  if ( s )
  {
    v13 = strlen(s);
    v14 = v13;
    if ( !v13 )
    {
      *(_QWORD *)(v5 + 8) = 0;
      v6 = v12;
LABEL_7:
      *(_QWORD *)&v24 = 0;
      qfree();
      goto LABEL_8;
    }
    v15 = *(void **)v5;
    v16 = v13 + 1;
    if ( *(_QWORD *)(v5 + 16) < v13 + 1 )
    {
      v17 = qvector_reserve();
      *(_QWORD *)v5 = v17;
      v15 = (void *)v17;
    }
    *(_QWORD *)(v5 + 8) = v16;
    memmove(v15, v11, v14);
    *(_BYTE *)(*(_QWORD *)v5 + v14) = 0;
    v6 = v12;
    v11 = s;
    goto LABEL_6;
  }
  *(_QWORD *)(v5 + 8) = 0;
  v6 = v10;
LABEL_8:
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree();
  }
  return v6;
}
