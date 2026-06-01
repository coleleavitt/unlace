__int64 __fastcall sub_12D70(__int64 a1, __int64 a2)
{
  int v3; // edx
  __int64 result; // rax
  const void *v5; // rbx
  size_t v6; // rax
  size_t v7; // rbp
  void *v8; // rdi
  size_t v9; // r13
  __int64 v10; // rax
  int v11; // [rsp+Ch] [rbp-43Ch]
  char s2[1032]; // [rsp+10h] [rbp-438h] BYREF
  unsigned __int64 v13; // [rsp+418h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( (unsigned int)qsscanf() == 1 )
  {
    v3 = strcmp(s1, s2);
    result = -1;
    if ( v3 )
      return result;
    return 0;
  }
  if ( (unsigned int)qsscanf() != 1 )
    return 0;
  v5 = (const void *)(v11 - 1 + a2);
  if ( v5 && (v6 = strlen((const char *)v5), (v7 = v6) != 0) )
  {
    v8 = *(void **)a1;
    v9 = v6 + 1;
    if ( *(_QWORD *)(a1 + 16) < v6 + 1 )
    {
      v10 = qvector_reserve();
      *(_QWORD *)a1 = v10;
      v8 = (void *)v10;
    }
    *(_QWORD *)(a1 + 8) = v9;
    memmove(v8, v5, v7);
    *(_BYTE *)(*(_QWORD *)a1 + v7) = 0;
    return 0;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    return 0;
  }
}

