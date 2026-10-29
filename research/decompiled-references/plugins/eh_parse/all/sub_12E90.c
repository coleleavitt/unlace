__int64 __fastcall sub_12E90(__int64 a1, const char *a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  const char *v6; // rdx
  const char *v7; // rsi
  unsigned int type_ordinal; // eax
  __int64 v9; // rbx
  __int64 named_type_tid; // rax
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // r14
  unsigned __int64 v15; // rbp
  __int64 v16; // rsi
  char *v17; // rbx
  int v18; // eax
  int v19; // eax
  __int64 v20; // rbx
  unsigned __int64 v21; // rbp
  __int64 v22; // r14
  __int64 v23; // rsi
  __m128i si128; // xmm0
  __m128i *v25; // rbx
  const char *v26; // [rsp+0h] [rbp-48h] BYREF
  __int128 v27; // [rsp+8h] [rbp-40h]
  unsigned __int64 v28; // [rsp+18h] [rbp-30h]

  v4 = a3;
  v28 = __readfsqword(0x28u);
  sub_80C0(a1);
  v26 = nullptr;
  v5 = *(_QWORD *)(a1 + 8);
  v27 = 0;
  if ( (unsigned __int8)getinf_flag(3, 4) )
  {
    if ( (*(_BYTE *)(a1 + 124) & 2) != 0 )
    {
      sub_12DD0((__int64 *)&v26, (__int64)"#define __RVAPTR    %s\n", "__offset(OFF64|RVAOFF)");
      v6 = "__offset(OFF64|RVAOFF|PASTEND)";
    }
    else
    {
      sub_12DD0((__int64 *)&v26, (__int64)"#define __RVAPTR\n");
      v6 = "__offset(OFF64|PASTEND|AUTO)";
    }
  }
  else
  {
    sub_12DD0((__int64 *)&v26, (__int64)"#define __ptr32\n");
    if ( (*(_BYTE *)(a1 + 124) & 2) != 0 )
    {
      sub_12DD0((__int64 *)&v26, (__int64)"#define __RVAPTR    %s\n", "__offset(OFF32|RVAOFF)");
      v6 = "__offset(OFF32|RVAOFF|PASTEND)";
    }
    else
    {
      sub_12DD0((__int64 *)&v26, (__int64)"#define __RVAPTR\n");
      v6 = "__offset(OFF32|PASTEND|AUTO)";
    }
  }
  sub_12DD0((__int64 *)&v26, (__int64)"#define __RVAPTREND %s\n", v6);
  switch ( (int)v4 )
  {
    case 4:
      if ( *(_DWORD *)(v5 + 4) != 24 )
        goto LABEL_6;
      sub_12DD0(
        (__int64 *)&v26,
        (__int64)"struct %s{  int magicNumber             __hex;  int maxState                __dec;  void *__ptr32 pUnwi"
                 "ndMap    __RVAPTR;  int nTryBlocks              __dec;  void *__ptr32 pTryBlockMap  __RVAPTR;  int EHCo"
                 "ntextDelta          __dec;  int nIPMapEntries           __dec;  void *__ptr32 pIPtoStateMap __RVAPTR;};",
        a2);
      break;
    case 5:
      v19 = *(_DWORD *)(v5 + 4);
      if ( v19 == 24 )
      {
        sub_12DD0(
          (__int64 *)&v26,
          (__int64)"struct %s{  int magicNumber             __hex;  int maxState                __dec;  void *__ptr32 pUn"
                   "windMap    __RVAPTR;  int nTryBlocks              __dec;  void *__ptr32 pTryBlockMap  __RVAPTR;  int "
                   "EHContextDelta          __dec;  int nIPMapEntries           __dec;  void *__ptr32 pIPtoStateMap __RVA"
                   "PTR;  void *__ptr32 pESTypeList   __RVAPTR;};",
          a2);
      }
      else
      {
        if ( v19 || !(unsigned __int8)getinf_flag(3, 4) )
          goto LABEL_6;
        sub_12DD0(
          (__int64 *)&v26,
          (__int64)"struct %s{  int magicNumber             __hex;  int maxState                __dec;  void *__ptr32 pUn"
                   "windMap    __RVAPTR;  int nTryBlocks              __dec;  void *__ptr32 pTryBlockMap  __RVAPTR;  int "
                   "nIPMapEntries           __dec;  void *__ptr32 pIPtoStateMap __RVAPTR;  int dispUnwindHelp          __"
                   "dec;  void *__ptr32 pESTypeList   __RVAPTR;};",
          a2);
      }
      break;
    case 6:
      v18 = *(_DWORD *)(v5 + 4);
      if ( v18 == 24 )
      {
        sub_12DD0(
          (__int64 *)&v26,
          (__int64)"struct %s{  int magicNumber             __hex;  int maxState                __dec;  void *__ptr32 pUn"
                   "windMap    __RVAPTR;  int nTryBlocks              __dec;  void *__ptr32 pTryBlockMap  __RVAPTR;  int "
                   "EHContextDelta          __dec;  int nIPMapEntries           __udec;  void *__ptr32 pIPtoStateMap __RV"
                   "APTR;  void *__ptr32 pESTypeList   __RVAPTR;  int EHFlags                 __hex;};",
          a2);
      }
      else
      {
        if ( v18 || !(unsigned __int8)getinf_flag(3, 4) )
          goto LABEL_6;
        sub_12DD0(
          (__int64 *)&v26,
          (__int64)"struct %s{  int magicNumber             __hex;  int maxState                __dec;  void *__ptr32 pUn"
                   "windMap    __RVAPTR;  int nTryBlocks              __dec;  void *__ptr32 pTryBlockMap  __RVAPTR;  int "
                   "nIPMapEntries           __dec;  void *__ptr32 pIPtoStateMap __RVAPTR;  int dispUnwindHelp          __"
                   "dec;  void *__ptr32 pESTypeList   __RVAPTR;  int EHFlags                 __hex;};",
          a2);
      }
      break;
    case 9:
      sub_12DD0(
        (__int64 *)&v26,
        (__int64)"struct %s { %s",
        a2,
        "int adjectives                 __hex;const struct TypeDescriptor *__ptr32 pType __RVAPTR;int dispCatchObj       "
        "        __dec;void *__ptr32 addressOfHandler __RVAPTR;");
      if ( (unsigned __int8)getinf_flag(3, 4) )
      {
        v12 = *(_DWORD *)(v5 + 4);
        if ( !v12 || v12 == 13 )
        {
          v20 = v27;
          if ( (_QWORD)v27 )
          {
            v22 = v27 + 19;
            v21 = v27 + 20;
            v20 = v27 - 1;
          }
          else
          {
            v21 = 21;
            v22 = 20;
          }
          v23 = (__int64)v26;
          if ( *((_QWORD *)&v27 + 1) < v21 )
          {
            v26 = (const char *)qvector_reserve(&v26, v26, v21, 1);
            v23 = (__int64)v26;
          }
          si128 = _mm_load_si128((const __m128i *)&xmmword_250B0);
          *(_QWORD *)&v27 = v21;
          *(_BYTE *)(v23 + v22) = 0;
          v25 = (__m128i *)&v26[v20];
          v25[1].m128i_i32[0] = 996369764;
          *v25 = si128;
        }
      }
      v13 = v27;
      if ( (_QWORD)v27 )
      {
        v14 = v27 + 2;
        v15 = v27 + 3;
        v13 = v27 - 1;
      }
      else
      {
        v15 = 4;
        v14 = 3;
      }
      v16 = (__int64)v26;
      if ( *((_QWORD *)&v27 + 1) < v15 )
      {
        v26 = (const char *)qvector_reserve(&v26, v26, v15, 1);
        v16 = (__int64)v26;
      }
      *(_QWORD *)&v27 = v15;
      *(_BYTE *)(v16 + v14) = 0;
      v17 = (char *)&v26[v13];
      *(_WORD *)v17 = 32032;
      v17[2] = 59;
      break;
    case 12:
      if ( *(_DWORD *)(v5 + 4) != 24 )
        goto LABEL_6;
      sub_12DD0(
        (__int64 *)&v26,
        (__int64)"struct %s{  int tryLow                  __dec;  int tryHigh                 __dec;  int nCatches       "
                 "         __dec;  void *__ptr32 pHandlerArray __RVAPTR;};",
        a2);
      break;
    case 16:
      if ( !*(_QWORD *)(a1 + 272) )
      {
        named_type_tid = get_named_type_tid("_EH4_SCOPETABLE_RECORD");
        if ( named_type_tid == -1 )
          named_type_tid = sub_12E90(a1, "_EH4_SCOPETABLE_RECORD", 15);
        *(_QWORD *)(a1 + 272) = named_type_tid;
      }
      goto LABEL_6;
    default:
LABEL_6:
      sub_12DD0((__int64 *)&v26, (__int64)"struct %s { %s };", a2, off_2E620[2 * v4 + 1]);
      break;
  }
  v7 = s1;
  if ( (_QWORD)v27 )
    v7 = v26;
  parse_decls(0, v7, sub_9510, 1024);
  type_ordinal = get_type_ordinal(0, a2);
  set_type_choosable(0, type_ordinal, 0);
  v9 = get_named_type_tid(a2);
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26);
  }
  return v9;
}
