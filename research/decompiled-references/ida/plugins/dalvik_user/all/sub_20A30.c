__int64 __fastcall sub_20A30(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  __int64 v4; // rdx
  unsigned int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // r12
  unsigned __int64 v8; // r12
  __int64 v9; // rbx
  _QWORD *v10; // rax
  const void *v12; // r15
  void *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // [rsp+0h] [rbp-58h] BYREF
  __int128 v16; // [rsp+8h] [rbp-50h]
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v15 = 0;
  v16 = 0;
  v3 = sub_20770(&v15, (__int64)"getprop ro.build.version.release", a2);
  v4 = v15;
  v5 = v3;
  if ( !(_BYTE)v3 )
    goto LABEL_17;
  v6 = v16;
  v7 = v16;
  if ( !(_QWORD)v16 )
  {
    v5 = 0;
    if ( !v15 )
      return v5;
    goto LABEL_12;
  }
  if ( a1 )
  {
    if ( a1 == v15 )
      goto LABEL_8;
    v8 = *(_QWORD *)(v15 + 8);
    if ( v8 <= 1 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      goto LABEL_7;
    }
    v12 = *(const void **)v15;
    v13 = *(void **)a1;
    if ( *(_QWORD *)(a1 + 16) < v8 )
    {
      v14 = qvector_reserve();
      *(_QWORD *)a1 = v14;
      v13 = (void *)v14;
    }
    *(_QWORD *)(a1 + 8) = v8;
    memmove(v13, v12, v8 - 1);
    *(_BYTE *)(*(_QWORD *)a1 + v8 - 1) = 0;
    v4 = v15;
LABEL_17:
    if ( !v4 )
      return v5;
    v7 = v16;
    if ( !(_QWORD)v16 )
      goto LABEL_12;
    goto LABEL_8;
  }
LABEL_7:
  v7 = v6;
  if ( v4 )
  {
LABEL_8:
    v9 = 0;
    do
    {
      v10 = (_QWORD *)(v4 + 24 * v9);
      if ( *v10 )
      {
        v10[1] = 0;
        qfree();
        v4 = v15;
      }
      ++v9;
    }
    while ( v9 != v7 );
LABEL_12:
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  return v5;
}

