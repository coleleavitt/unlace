__int64 __fastcall sub_179B0(__int64 *a1, __int64 *a2, _DWORD *a3)
{
  __int64 result; // rax
  __int64 v6; // rax
  const char *v7; // rax
  char *v8; // rbx
  size_t v9; // rax
  size_t v10; // r12
  __int64 v11; // rdi
  __int64 v12; // r9
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  const char *v15; // rax
  char *v16; // rbx
  size_t v17; // rax
  size_t v18; // r12
  unsigned int v19; // r15d
  int v20; // edx
  __int64 v21; // rdx
  _QWORD *v22; // rax
  unsigned __int64 v23; // r15
  void *v24; // rdi
  unsigned __int64 v25; // r13
  void *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // [rsp+8h] [rbp-330h]
  __int16 v30; // [rsp+20h] [rbp-318h]
  __int64 (__fastcall **v31)(); // [rsp+40h] [rbp-2F8h] BYREF
  __int64 (__fastcall **v32)(); // [rsp+90h] [rbp-2A8h] BYREF
  __int64 v33; // [rsp+98h] [rbp-2A0h]
  __int128 v34; // [rsp+A0h] [rbp-298h]
  __m128i v35; // [rsp+D8h] [rbp-260h] BYREF
  unsigned __int16 v36; // [rsp+ECh] [rbp-24Ch]
  __int16 v37; // [rsp+F0h] [rbp-248h]
  __int64 v38; // [rsp+108h] [rbp-230h]
  unsigned int v39; // [rsp+1C0h] [rbp-178h]
  _BYTE v40[264]; // [rsp+1D0h] [rbp-168h] BYREF
  __int64 v41; // [rsp+2D8h] [rbp-60h]
  __int64 v42; // [rsp+2E0h] [rbp-58h]
  unsigned __int64 v43; // [rsp+2F8h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  if ( qlread() != 28 )
    return 0;
  if ( v30 == 17744 )
    goto LABEL_9;
  if ( v30 == 23126 )
  {
    qlseek();
    v14 = qlread();
    result = 0;
    if ( v14 != 40 )
      return result;
    sub_E9A0(WORD1(v32));
    sub_174B0(a1);
    if ( byte_349C0 )
    {
      v25 = 4;
      v16 = "cli";
      v18 = 3;
    }
    else
    {
      v15 = sub_7610(WORD1(v32));
      v16 = (char *)v15;
      if ( !v15 || (v17 = strlen(v15), (v18 = v17) == 0) )
      {
        a2[1] = 0;
        return 32779;
      }
      v25 = v17 + 1;
    }
    v26 = (void *)*a2;
    if ( a2[2] < v25 )
    {
      v28 = qvector_reserve();
      *a2 = v28;
      v26 = (void *)v28;
    }
    a2[1] = v25;
    memmove(v26, v16, v18);
    *(_BYTE *)(*a2 + v18) = 0;
    return 32779;
  }
  if ( v30 != 23117 && v30 != 19802 )
    return 0;
  qlseek();
  if ( qlread() != 4 )
    return 0;
LABEL_9:
  v32 = off_324F0;
  v33 = 0;
  v42 = 0;
  v34 = 0;
  qlseek();
  memset(v40, 0, sizeof(v40));
  qlseek();
  if ( (unsigned __int64)(qlread() - 93) > 0xAB
    || *(_DWORD *)v40 != 4542530 && *(_DWORD *)v40 != 17744 && *(_DWORD *)v40 != 19536
    || !(unsigned __int8)sub_13040(&v35, (const __m128i *)v40, 1, 0) )
  {
    goto LABEL_28;
  }
  v6 = v38;
  if ( v37 != 523 )
    v6 = HIDWORD(v38);
  v41 = v6;
  if ( dword_34584 != 1 )
  {
    sub_E9A0(v35.m128i_u16[2]);
    sub_174B0(a1);
    if ( byte_349C0 )
    {
      v23 = 4;
      v8 = "cli";
      v10 = 3;
    }
    else
    {
      v7 = sub_7610(v35.m128i_u16[2]);
      v8 = (char *)v7;
      if ( !v7 || (v9 = strlen(v7), (v10 = v9) == 0) )
      {
        a2[1] = 0;
LABEL_20:
        ++dword_34584;
        v11 = v33;
        result = 49163;
        goto LABEL_29;
      }
      v23 = v9 + 1;
    }
    v24 = (void *)*a2;
    if ( a2[2] < v23 )
    {
      v27 = qvector_reserve();
      *a2 = v27;
      v24 = (void *)v27;
    }
    a2[1] = v23;
    memmove(v24, v8, v10);
    *(_BYTE *)(*a2 + v10) = 0;
    goto LABEL_20;
  }
  v19 = v39;
  if ( !v39 )
    goto LABEL_28;
  v31 = off_32498;
  if ( v35.m128i_i32[0] == 23126 )
    v20 = v42 + 40;
  else
    v20 = v36 + (_DWORD)v42 + 24;
  sub_DB90((__int64)&v32, (__int64)a3, v20, v35.m128i_u16[3], (__int64)&v31);
  v11 = v33;
  v12 = v34 - 1;
  if ( (__int64)v34 - 1 < 0 )
    goto LABEL_45;
  v21 = v34 - 1;
  v13 = (_QWORD *)(v33 + 32 * v34 - 32);
  v22 = v13;
  while ( (unsigned __int64)v19 < *v22 || (unsigned __int64)v19 >= v22[1] )
  {
    --v21;
    v22 -= 4;
    if ( v21 == -1 )
      goto LABEL_45;
  }
  if ( v19 + v22[2] - *v22 == -1 )
  {
LABEL_45:
    result = 0;
    goto LABEL_29;
  }
  if ( !a3 || *a3 != 3 )
  {
    while ( (unsigned __int64)v19 < *v13 || (unsigned __int64)v19 >= v13[1] )
    {
      --v12;
      v13 -= 4;
      if ( v12 == -1 )
        goto LABEL_27;
    }
    if ( v19 + v13[2] - *v13 == -1 )
    {
LABEL_27:
      qlseek();
      goto LABEL_28;
    }
  }
  qlseek();
  if ( qlread() != 72 || (_DWORD)v31 != 72 )
  {
LABEL_28:
    v11 = v33;
    result = 0;
    goto LABEL_29;
  }
  sub_8580((__int64)a1, "Microsoft.Net assembly");
  sub_8580((__int64)a2, "cli");
  v11 = v33;
  result = 32785;
LABEL_29:
  v32 = off_324F0;
  if ( v11 )
  {
    v29 = result;
    *(_QWORD *)&v34 = 0;
    qfree();
    return v29;
  }
  return result;
}
