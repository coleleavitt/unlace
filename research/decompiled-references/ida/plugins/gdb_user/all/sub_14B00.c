__int64 __fastcall sub_14B00(_QWORD *a1, __int64 a2)
{
  const char *v2; // rdx
  _QWORD *v4; // r12
  _BYTE *v5; // rbx
  size_t v6; // rax
  size_t v7; // r13
  void *v8; // rdi
  size_t v9; // r14
  __int64 v10; // rax
  __int64 v11; // [rsp+8h] [rbp-50h] BYREF
  __int64 v12; // [rsp+10h] [rbp-48h] BYREF
  __int128 v13; // [rsp+18h] [rbp-40h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( a1[2] )
  {
    v2 = (const char *)a1[1];
    if ( *v2 )
    {
      v12 = 0;
      v13 = 0;
      if ( (unsigned __int8)sub_14660((__int64)&v12, &v11, v2) )
      {
        v4 = (_QWORD *)sub_F0E0();
        v4[151] = v11;
        if ( a1[6] )
        {
          v5 = (_BYTE *)a1[5];
          if ( *v5 )
          {
            v4[120] = 1;
            if ( v5 && (v6 = strlen(v5), (v7 = v6) != 0) )
            {
              v8 = (void *)v4[122];
              v9 = v6 + 1;
              if ( v4[124] < v6 + 1 )
              {
                v10 = qvector_reserve();
                v4[122] = v10;
                v8 = (void *)v10;
              }
              v4[123] = v9;
              memmove(v8, v5, v7);
              *(_BYTE *)(v4[122] + v7) = 0;
            }
            else
            {
              v4[123] = 0;
            }
          }
        }
        free_idcv();
        *(_BYTE *)a2 = 2;
        *(_QWORD *)(a2 + 8) = 1;
      }
      if ( v12 )
      {
        *(_QWORD *)&v13 = 0;
        qfree();
      }
    }
  }
  return 0;
}

