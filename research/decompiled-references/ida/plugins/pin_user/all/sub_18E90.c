bool __fastcall sub_18E90(__int64 a1, unsigned __int64 a2, __int64 *a3)
{
  int v6; // r13d
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  size_t v11; // rax
  size_t v12; // r9
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  bool v15; // zf
  void *v17; // rdi
  size_t v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  const char *v21; // rax
  size_t v22; // [rsp+10h] [rbp-468h]
  size_t v23; // [rsp+10h] [rbp-468h]
  size_t v24; // [rsp+18h] [rbp-460h]
  __int128 v25; // [rsp+20h] [rbp-458h] BYREF
  int v26; // [rsp+30h] [rbp-448h]
  char s[1024]; // [rsp+34h] [rbp-444h] BYREF
  __int16 v28; // [rsp+434h] [rbp-44h]
  unsigned __int64 v29; // [rsp+438h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( a2 )
  {
    v6 = 0;
    while ( 1 )
    {
      *(_BYTE *)(a1 + 1289) = 0;
      v13 = *(_QWORD *)(a1 + 24);
      v26 = 0;
      v28 = 2;
      s[0] = 0;
      v25 = 0;
      v14 = sub_26190(v13, &v25, 1046, 0xFFFFFFFFLL);
      if ( v14 <= 0x415 )
        break;
      if ( v14 == 1046 )
      {
        sub_18640(a1, (__int64)"  RECV memory_info_t %a..%a %s\n", v25, s);
        v7 = a3[1];
        v8 = *a3;
        if ( a3[2] < (unsigned __int64)(v7 + 1) )
        {
          v19 = qvector_reserve();
          v7 = a3[1];
          *a3 = v19;
          v8 = v19;
        }
        v9 = v8 + 80 * v7;
        *(_OWORD *)v9 = 0;
        *(_WORD *)(v9 + 72) = 0;
        v10 = v25;
        *(_QWORD *)(v9 + 16) = 0;
        *(_QWORD *)(v9 + 40) = 0;
        *(_QWORD *)(v9 + 64) = 0;
        *(_OWORD *)(v9 + 24) = 0;
        *(_OWORD *)(v9 + 48) = 0;
        ++a3[1];
        *(_OWORD *)v9 = __PAIR128__(*((unsigned __int64 *)&v25 + 1), v10);
        v11 = strlen(s);
        v12 = v11;
        if ( v11 )
        {
          v17 = *(void **)(v9 + 16);
          v18 = v11 + 1;
          if ( *(_QWORD *)(v9 + 32) < v11 + 1 )
          {
            v24 = v11;
            v23 = v11 + 1;
            v20 = qvector_reserve();
            v12 = v24;
            v18 = v23;
            *(_QWORD *)(v9 + 16) = v20;
            v17 = (void *)v20;
          }
          *(_QWORD *)(v9 + 24) = v18;
          v22 = v12;
          memmove(v17, s, v12);
          *(_BYTE *)(*(_QWORD *)(v9 + 16) + v22) = 0;
        }
        else
        {
          *(_QWORD *)(v9 + 24) = 0;
        }
        ++v6;
        *(_WORD *)(v9 + 72) = v28;
        if ( v6 < a2 )
          continue;
      }
      return a3[1] == a2;
    }
    if ( (unsigned int)sub_260B0(*(_QWORD *)(a1 + 24)) == 62 )
    {
      *(_WORD *)(a1 + 1288) = 257;
    }
    else
    {
      v15 = *(_BYTE *)(a1 + 1289) == 0;
      *(_BYTE *)(a1 + 1288) = 1;
      if ( v15 && !*(_BYTE *)(a1 + 81) )
      {
        v21 = (const char *)sub_260C0(*(_QWORD *)(a1 + 24));
        sub_BDA0((__int64)"Network error: %s\n", v21);
      }
    }
  }
  return a3[1] == a2;
}

