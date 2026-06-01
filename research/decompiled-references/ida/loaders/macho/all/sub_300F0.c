__int64 __fastcall sub_300F0(__int64 a1, const char *a2, const char *a3, __int64 *a4)
{
  unsigned int v5; // eax
  unsigned int v6; // ebp
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  __m128i v12; // [rsp+0h] [rbp-D8h] BYREF
  __m128i v13[2]; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v14[12]; // [rsp+78h] [rbp-60h] BYREF

  v14[6] = __readfsqword(0x28u);
  v5 = sub_290B0(a1, a2, a3, v13);
  if ( (_BYTE)v5
    && ((v6 = v5, (*(_BYTE *)(a1 + 480) & 1) == 0) && *(_DWORD *)(a1 + 176) == 1
     || (unsigned __int8)sub_28FF0(a1, a2, &v12)) )
  {
    qlseek();
    sub_30010(*(_QWORD *)(a1 + 48), v14, 1u, (__int64)"section contents", -1, -1);
    v7 = v14[0];
    v8 = a4[1];
    if ( v8 < v14[0] )
    {
      v10 = *a4;
      if ( a4[2] < v14[0] )
      {
        v11 = qvector_reserve();
        v8 = a4[1];
        *a4 = v11;
        v10 = v11;
      }
      memset((void *)(v10 + v8), 0, v7 - v8);
      a4[1] = v7;
    }
    else if ( v14[0] != v8 )
    {
      a4[1] = v14[0];
    }
    qlread();
  }
  else
  {
    return 0;
  }
  return v6;
}

