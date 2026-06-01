__int64 __fastcall sub_3D100(__int64 a1, __int64 *a2)
{
  unsigned int v2; // ebp
  size_t v4; // r12
  void *v5; // r15
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rdi
  void *v10; // rdi
  void *src; // [rsp+0h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-70h]
  __int64 v13; // [rsp+20h] [rbp-58h]
  __int128 v14; // [rsp+28h] [rbp-50h]
  unsigned __int64 v15; // [rsp+38h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( !a2 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  src = nullptr;
  *(_OWORD *)n = 0;
  v2 = sub_3CC50(a1, (__int64)"exec-file", (__int64)&unk_54999, (__int64 *)&src);
  if ( (_BYTE)v2 )
  {
    v4 = n[0];
    v5 = src;
    v6 = 0;
    v13 = 0;
    v7 = 0;
    v14 = 0;
    if ( n[0] )
    {
      v10 = nullptr;
      if ( n[0] != -1 )
      {
        v13 = qvector_reserve();
        v10 = (void *)v13;
      }
      *(_QWORD *)&v14 = v4 + 1;
      memmove(v10, v5, v4);
      *(_BYTE *)(v13 + v4) = 0;
      v7 = v13;
      v6 = *((_QWORD *)&v14 + 1);
      v4 = v14;
    }
    v13 = 0;
    v8 = *a2;
    v14 = 0;
    if ( v8 )
    {
      a2[1] = 0;
      qfree();
      v9 = v13;
      *a2 = v7;
      a2[1] = v4;
      a2[2] = v6;
      if ( v9 )
      {
        *(_QWORD *)&v14 = 0;
        qfree();
      }
    }
    else
    {
      *a2 = v7;
      a2[1] = v4;
      a2[2] = v6;
    }
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  return v2;
}

