int __fastcall sub_EB160(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // ecx
  int result; // eax
  __int64 v8; // r12
  int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int16 v15; // dx
  __int64 v16; // rdx
  __int64 v17; // rdi
  bool v18; // zf
  __int64 v19; // rdi
  __int16 v20; // dx
  __int64 v21; // rdi
  int v22; // [rsp+Ch] [rbp-5Ch]
  int v23; // [rsp+Ch] [rbp-5Ch]
  int v24; // [rsp+10h] [rbp-58h] BYREF
  __int64 v25; // [rsp+18h] [rbp-50h]
  __int64 v26; // [rsp+20h] [rbp-48h]
  unsigned __int64 v27; // [rsp+38h] [rbp-30h]

  v6 = *(unsigned __int8 *)(a1 + 28);
  v27 = __readfsqword(0x28u);
  result = 0;
  if ( v6 <= (int)a2 )
    return result;
  v8 = *(_QWORD *)(a1 + 16);
  v10 = a2;
  v11 = (unsigned int)v6;
  v12 = *(_QWORD *)(v8 + 16);
  if ( v12 )
  {
    xmmword_241500(v12);
    v11 = *(unsigned __int8 *)(a1 + 28);
  }
  if ( (unsigned __int8)v11 <= 1u )
    goto LABEL_11;
  v13 = dword_241470;
  v14 = *(_QWORD *)(a1 + 16);
  a2 = *(unsigned int *)(a1 + 24);
  v15 = *(_WORD *)(a1 + 30);
  if ( v10 != 1 )
  {
LABEL_6:
    v24 = 2;
    v25 = v13;
    v26 = 2;
    if ( sub_CB8F0(v14, a2, v15, (__int64)&v24, a5, a6) )
    {
      *(_DWORD *)(a1 + 32) = *__errno_location();
      result = 2058;
      goto LABEL_8;
    }
    *(_BYTE *)(v8 + 32) = 1;
LABEL_11:
    if ( v10 )
    {
      v19 = *(_QWORD *)(v8 + 16);
      if ( v19 )
        xmmword_241510(v19, a2, v11);
      goto LABEL_21;
    }
    v16 = (unsigned int)(*(_DWORD *)(v8 + 24) - 1);
    result = 0;
    v18 = *(_DWORD *)(v8 + 24) == 1;
    *(_DWORD *)(v8 + 24) = v16;
    if ( v18 )
    {
      v20 = *(_WORD *)(a1 + 30);
      a2 = *(unsigned int *)(a1 + 24);
      v21 = *(_QWORD *)(a1 + 16);
      v24 = 2;
      v26 = 0;
      v25 = 0;
      result = sub_CB8F0(v21, a2, v20, (__int64)&v24, a5, a6);
      if ( result )
      {
        *(_DWORD *)(a1 + 32) = *__errno_location();
        *(_BYTE *)(v8 + 32) = 0;
        result = 2058;
        *(_BYTE *)(a1 + 28) = 0;
      }
      else
      {
        *(_BYTE *)(v8 + 32) = 0;
      }
    }
    v18 = (*(_DWORD *)(v8 + 28))-- == 1;
    if ( v18 )
    {
      v23 = result;
      sub_EB0F0(a1, a2);
      result = v23;
    }
    v17 = *(_QWORD *)(v8 + 16);
    if ( !v17 )
      goto LABEL_17;
    goto LABEL_16;
  }
  v24 = 0;
  v26 = 510;
  v25 = dword_241470 + 2;
  if ( !sub_CB8F0(v14, a2, v15, (__int64)&v24, a5, a6) )
  {
    v13 = dword_241470;
    v14 = *(_QWORD *)(a1 + 16);
    a2 = *(unsigned int *)(a1 + 24);
    v15 = *(_WORD *)(a1 + 30);
    goto LABEL_6;
  }
  *(_DWORD *)(a1 + 32) = *__errno_location();
  result = 2314;
LABEL_8:
  v17 = *(_QWORD *)(v8 + 16);
  if ( !v17 )
    return result;
LABEL_16:
  v22 = result;
  xmmword_241510(v17, a2, v16);
  result = v22;
LABEL_17:
  if ( !result )
  {
LABEL_21:
    *(_BYTE *)(a1 + 28) = v10;
    return 0;
  }
  return result;
}
