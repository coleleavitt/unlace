__int64 __fastcall sub_2B1B70(const void **a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v6; // rbp
  void *v8; // r15
  void *v9; // rdi
  void *v10; // r15
  void *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  void *src; // [rsp+10h] [rbp-78h] BYREF
  __int128 v15; // [rsp+18h] [rbp-70h]
  void *v16; // [rsp+28h] [rbp-60h] BYREF
  __int128 v17; // [rsp+30h] [rbp-58h]
  unsigned __int64 v18; // [rsp+48h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v15 = 0;
  v17 = 0;
  src = nullptr;
  v16 = nullptr;
  sub_2B18A0(a1, a2, &src);
  sub_2B18A0(a1, a2, &v16);
  if ( a4 )
  {
    v5 = v15;
    if ( (unsigned __int64)v15 > 1 )
    {
      v8 = src;
      v9 = *(void **)a4;
      if ( *(_QWORD *)(a4 + 16) < (unsigned __int64)v15 )
      {
        v13 = qvector_reserve();
        *(_QWORD *)a4 = v13;
        v9 = (void *)v13;
      }
      *(_QWORD *)(a4 + 8) = v5;
      memmove(v9, v8, v5 - 1);
      *(_BYTE *)(*(_QWORD *)a4 + v5 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a4 + 8) = 0;
    }
    v6 = v17;
    if ( (unsigned __int64)v17 > 1 )
    {
      v10 = v16;
      v11 = *(void **)(a4 + 24);
      if ( *(_QWORD *)(a4 + 40) < (unsigned __int64)v17 )
      {
        v12 = qvector_reserve();
        *(_QWORD *)(a4 + 24) = v12;
        v11 = (void *)v12;
      }
      *(_QWORD *)(a4 + 32) = v6;
      memmove(v11, v10, v6 - 1);
      *(_BYTE *)(*(_QWORD *)(a4 + 24) + v6 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a4 + 32) = 0;
    }
  }
  if ( (unsigned __int64)v15 > 1 && (unsigned __int8)deserialize_tinfo() )
    LOBYTE(a4) = (unsigned int)verify_tinfo() == 0;
  else
    LODWORD(a4) = 0;
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  if ( src )
  {
    *(_QWORD *)&v15 = 0;
    qfree();
  }
  return (unsigned int)a4;
}

