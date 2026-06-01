__int64 __fastcall sub_19DF0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        __int64 a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        __int64 a47)
{
  __int64 v48; // rdi
  __int64 v49; // r15
  int v50; // r9d
  __int64 v52; // r14
  __int64 v53; // rax
  unsigned int v54; // esi
  __int64 v55; // rdx
  unsigned int v56; // ebx
  __int64 v57; // r13
  int v58; // eax
  int v60; // edx
  int v61; // ecx
  int v62; // r8d
  int v63; // r9d
  __int64 v64; // [rsp+8h] [rbp-70h]
  __int64 v65; // [rsp+10h] [rbp-68h]
  int v66; // [rsp+20h] [rbp-58h]
  bool v67; // [rsp+27h] [rbp-51h]
  __int64 v68; // [rsp+28h] [rbp-50h]

  v48 = a1 + 32;
  v49 = *(_QWORD *)(v48 - 24);
  v50 = *(_DWORD *)(v48 - 16);
  if ( v48 == *(_QWORD *)(v48 + 16) )
    return v49;
  v64 = a1 + 72;
  v52 = *(_QWORD *)(v48 + 16);
  v66 = *(_DWORD *)(v48 - 16);
  v65 = a1 + 80;
  v67 = v50 != 4 && (unsigned int)(v50 - 1) > 1;
  v68 = ~(-1LL << (8 * (unsigned __int8)v50));
  while ( 1 )
  {
    v53 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v52 + 32);
    v54 = v52 + 32;
    v56 = v55;
    v57 = v53;
    if ( v65 != sub_19B50(v64, v52 + 32, v55) )
    {
      v54 = v56;
      v57 = extend_sign(v57, v56, 1);
    }
    v58 = *(_DWORD *)(v52 + 56);
    if ( (unsigned int)(v58 - 1) > 1 && v58 != 4 )
      break;
    if ( v58 != v66 )
      goto LABEL_15;
    v49 += ((1LL << (8 * (unsigned __int8)v58)) - 1)
         & (*(_QWORD *)(v52 + 48) * (((1LL << (8 * (unsigned __int8)v58)) - 1) & v57));
    if ( !v67 )
      v49 &= v68;
LABEL_6:
    v52 = std::_Rb_tree_increment(v52);
    if ( v48 == v52 )
      return v49;
  }
  if ( v58 != 8 )
    goto LABEL_17;
  if ( v66 == 8 )
  {
    v49 += v57 * *(_QWORD *)(v52 + 48);
    goto LABEL_6;
  }
LABEL_15:
  if ( under_debugger )
    goto LABEL_19;
  interr(52905);
LABEL_17:
  if ( under_debugger )
LABEL_19:
    BUG();
  interr(52904);
  return sub_19FB0(
           52904,
           v54,
           v60,
           v61,
           v62,
           v63,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31,
           a32,
           a33,
           a34,
           a35,
           a36,
           a37,
           a38,
           a39,
           a40,
           a41,
           a42,
           a43,
           a44,
           a45,
           a46,
           a47);
}

