__int64 __fastcall sub_46DB0(unsigned __int64 a1, __int64 a2)
{
  _DWORD *v2; // rbx
  __int64 v3; // rax
  unsigned int v4; // ebx
  const char *v5; // r14
  char v7; // [rsp-A5h] [rbp-ADh] BYREF
  unsigned __int32 v8; // [rsp-A4h] [rbp-ACh] BYREF
  unsigned __int32 v9; // [rsp-A0h] [rbp-A8h] BYREF
  unsigned __int32 v10; // [rsp-9Ch] [rbp-A4h] BYREF
  unsigned __int32 v11; // [rsp-98h] [rbp-A0h] BYREF
  unsigned __int32 v12; // [rsp-94h] [rbp-9Ch] BYREF
  char *v13; // [rsp-90h] [rbp-98h]
  __int128 v14; // [rsp-88h] [rbp-90h]
  __m128i v15; // [rsp-70h] [rbp-78h] BYREF
  __int64 v16; // [rsp-60h] [rbp-68h]
  int v17; // [rsp-58h] [rbp-60h]
  __int64 v18; // [rsp-50h] [rbp-58h] BYREF
  __int128 v19; // [rsp-48h] [rbp-50h]
  char v20; // [rsp-38h] [rbp-40h]
  unsigned __int64 v21; // [rsp-28h] [rbp-30h]

  v2 = *(_DWORD **)a2;
  v21 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 8);
  v17 = 0;
  v18 = 0;
  v15 = _mm_unpacklo_epi64((__m128i)a1, (__m128i)(unsigned __int64)v2);
  v19 = 0;
  v14 = 0;
  v16 = v3;
  v20 = byte_7FBE9;
  v13 = (char *)qvector_reserve();
  *(_QWORD *)&v14 = 5;
  v13[4] = 0;
  *(_DWORD *)v13 = *v2;
  if ( v20 )
    sub_1FAD0(&v18);
  v17 += 4;
  v4 = sub_46430((__int64)&v15, &v8, 1);
  if ( !(_BYTE)v4 )
    goto LABEL_12;
  v5 = v13;
  if ( !(_QWORD)v14 )
    goto LABEL_5;
  if ( strcmp(v13, "HPST") && strcmp(v5, "HPEN") )
  {
    if ( strcmp(v5, "HPSG") )
      goto LABEL_5;
    if ( (unsigned __int8)sub_46430((__int64)&v15, &v9, 0)
      && (unsigned __int8)sub_46860((__int64)&v15, &v7, 0)
      && (unsigned __int8)sub_46430((__int64)&v15, &v10, 0)
      && (unsigned __int8)sub_46430((__int64)&v15, &v11, 0)
      && (unsigned __int8)sub_46430((__int64)&v15, &v12, 0) )
    {
      if ( byte_7FBE9 )
        sub_1FAD0(&v18);
      goto LABEL_14;
    }
LABEL_12:
    v5 = v13;
    v4 = 0;
    goto LABEL_5;
  }
  sub_46430((__int64)&v15, &v12, 1);
LABEL_14:
  v5 = v13;
LABEL_5:
  if ( v5 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  sub_43EB0((__int64)&v15);
  return v4;
}

