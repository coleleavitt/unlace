__int64 __fastcall sub_48E40(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  const __m128i *v6; // rax
  _QWORD *v7[7]; // [rsp+0h] [rbp-38h] BYREF

  v7[1] = (_QWORD *)__readfsqword(0x28u);
  qmutex_lock();
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 144) + 16LL) == *(_QWORD *)(*(_QWORD *)(a1 + 144) + 48LL) )
  {
    v6 = (const __m128i *)sub_45F40(a1, a3);
    v7[0] = v6->m128i_i64;
    if ( v6 )
    {
      if ( v6[1].m128i_i8[8] >= 0 )
      {
        sub_48DD0(a1, v6);
        v4 = sub_447C0(a1, a2);
LABEL_7:
        sub_44B80(v7);
        goto LABEL_3;
      }
      sub_11270((__int64)"JDWP Error: unordered reply packet");
    }
    v4 = 0;
    goto LABEL_7;
  }
  v4 = sub_447C0(a1, a2);
LABEL_3:
  qmutex_unlock();
  return v4;
}

