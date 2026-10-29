void __fastcall sub_4BA00(__int64 a1)
{
  int v2; // eax
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rdx
  __int64 *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+0h] [rbp-38h] BYREF
  __int64 v17; // [rsp+8h] [rbp-30h]
  unsigned __int64 v18; // [rsp+18h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  v2 = sub_4CAC0(*(_QWORD *)(a1 + 8));
  LODWORD(v16) = -1;
  v3 = v2;
  v4 = *(_QWORD *)(a1 + 88);
  if ( v2 >= v4 )
  {
    if ( v4 >= v2 )
      goto LABEL_3;
    v11 = *(_QWORD *)(a1 + 80);
    v12 = *(_QWORD *)(a1 + 96);
    v13 = a1 + 80;
    if ( (unsigned __int64)&v16 < v11 || (unsigned __int64)&v16 >= v11 + 4 * v12 )
    {
      if ( v12 >= v3
        || (v15 = qvector_reserve(v13, v11, v3, 4),
            v4 = *(_QWORD *)(a1 + 88),
            *(_QWORD *)(a1 + 80) = v15,
            v11 = v15,
            v4 < v3) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v11 + 4 * v4++) = -1;
          if ( v3 == v4 )
            break;
          v11 = *(_QWORD *)(a1 + 80);
        }
      }
    }
    else if ( v12 >= v3
           || (v14 = qvector_reserve(v13, v11, v3, 4),
               v4 = *(_QWORD *)(a1 + 88),
               *(_QWORD *)(a1 + 80) = v14,
               v11 = v14,
               v4 < v3) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v11 + 4 * v4++) = -1;
        if ( v3 == v4 )
          break;
        v11 = *(_QWORD *)(a1 + 80);
      }
    }
  }
  *(_QWORD *)(a1 + 88) = v3;
LABEL_3:
  v5 = *(__int64 **)(a1 + 120);
  v6 = *(_QWORD *)(a1 + 104);
  v7 = *(unsigned int *)(a1 + 128);
  v8 = v7 + (((__int64)v5 - v6) >> 3 << 6);
  if ( v3 >= v8 )
  {
    v16 = *(_QWORD *)(a1 + 120);
    sub_48FC0(a1 + 104, v5, v7, v3 - v8, 0);
  }
  else
  {
    v9 = v6 + 8 * ((__int64)v3 / 64);
    v10 = (__int64)v3 % 64;
    if ( v10 < 0 )
    {
      LODWORD(v10) = v10 + 64;
      v9 -= 8;
    }
    v16 = v9;
    LODWORD(v17) = v10;
    *(_QWORD *)(a1 + 120) = v9;
    *(_DWORD *)(a1 + 128) = v10;
  }
}
