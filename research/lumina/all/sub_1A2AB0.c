__int64 __fastcall sub_1A2AB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rbx
  const void *v10; // r13
  size_t v11; // rax
  size_t v12; // rbp
  __m128i *v13; // rdi
  size_t v14; // r14
  __m128i *v15; // rax
  _QWORD v16[9]; // [rsp+0h] [rbp-48h] BYREF

  v16[1] = __readfsqword(0x28u);
  LODWORD(v8) = sub_1A26F0(a1, (__m128i **)a5);
  if ( (_BYTE)v8 )
  {
    v8 = sub_1A2790(a1, a2, a3, a4);
    v16[0] = 0;
    (*(void (__fastcall **)(char **, __int64, _QWORD, _QWORD *))(a1 + 80))(&off_23D060, v8, 0, v16);
    (*(void (__fastcall **)(__int64))(a1 + 152))(v8);
    LOBYTE(v8) = v16[0] == 0;
    if ( v16[0] )
    {
      if ( a5 )
      {
        v10 = *(const void **)(v16[0] + 8LL);
        if ( v10 && (v11 = strlen(*(const char **)(v16[0] + 8LL)), (v12 = v11) != 0) )
        {
          v13 = *(__m128i **)a5;
          v14 = v11 + 1;
          if ( *(_QWORD *)(a5 + 16) < v11 + 1 )
          {
            v15 = (__m128i *)sub_1987B0(a5, *(void **)a5, v11 + 1, 1u);
            *(_QWORD *)a5 = v15;
            v13 = v15;
          }
          *(_QWORD *)(a5 + 8) = v14;
          memmove(v13, v10, v12);
          *(_BYTE *)(*(_QWORD *)a5 + v12) = 0;
        }
        else
        {
          *(_QWORD *)(a5 + 8) = 0;
        }
      }
    }
  }
  return (unsigned int)v8;
}
