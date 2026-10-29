__int64 __fastcall sub_1E310(__int64 a1, __int64 *a2, int a3, int a4, int a5, int a6)
{
  __int64 v8; // rdi
  unsigned int v9; // eax
  char *v10; // rbp
  unsigned int v11; // r15d
  int v13; // eax
  char v14; // r13
  char v15; // r13
  __int64 v16; // r12
  unsigned __int64 v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rax
  char *v20; // [rsp+0h] [rbp-58h] BYREF
  __int128 v21; // [rsp+8h] [rbp-50h]
  unsigned __int64 v22; // [rsp+18h] [rbp-40h]

  v8 = *(_QWORD *)(a1 + 864);
  v22 = __readfsqword(0x28u);
  v20 = nullptr;
  v21 = 0;
  if ( (int)sub_5ABF0(v8, a3, a3, a4, a5, a6) <= 0 )
  {
    v10 = v20;
    v11 = 0;
  }
  else
  {
    v9 = sub_5ABB0(*(_QWORD *)(a1 + 864), &v20);
    v10 = v20;
    v11 = v9;
    if ( (_BYTE)v9 )
    {
      v13 = sub_59CB0(&v20, 0);
      v10 = v20;
      if ( v13 == 1 )
      {
        if ( (_QWORD)v21 )
        {
          do
          {
            v14 = *v10;
            if ( *v10 == 125 )
            {
              v15 = *++v10;
              v14 = v15 ^ 0x20;
            }
            v16 = a2[1];
            v17 = 2;
            if ( v16 )
              v17 = v16-- + 1;
            v18 = *a2;
            if ( a2[2] < v17 )
            {
              v19 = qvector_reserve();
              *a2 = v19;
              v18 = v19;
            }
            a2[1] = v17;
            ++v10;
            *(_BYTE *)(v18 + v16) = v14;
            *(_BYTE *)(*a2 + v16 + 1) = 0;
          }
          while ( v10 != &v20[(_QWORD)v21] );
          v10 = v20;
        }
      }
      else
      {
        v11 = 0;
      }
    }
  }
  if ( v10 )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  return v11;
}

