__int64 __fastcall sub_2C3F0(__int64 a1, int a2, __int64 a3, _QWORD **a4)
{
  _QWORD *v5; // rcx
  _QWORD *v6; // rsi
  unsigned __int128 v7; // xmm0
  __m128i v8; // [rsp+70h] [rbp-38h]
  unsigned __int64 v9; // [rsp+98h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v6 = *a4;
      switch ( a3 )
      {
        case 0LL:
          v7 = (unsigned __int128)_mm_loadu_si128((const __m128i *)(a1 + 256));
          goto LABEL_10;
        case 1LL:
          v7 = (unsigned __int128)_mm_loadu_si128((const __m128i *)(a1 + 272));
          goto LABEL_10;
        case 2LL:
          v7 = (unsigned __int128)_mm_loadu_si128((const __m128i *)(a1 + 288));
          goto LABEL_10;
        case 3LL:
          v7 = (unsigned __int128)_mm_loadu_si128((const __m128i *)(a1 + 304));
          goto LABEL_10;
        case 4LL:
          v7 = (unsigned __int128)_mm_loadu_si128((const __m128i *)(a1 + 320));
          goto LABEL_10;
        case 5LL:
          v7 = (unsigned __int128)_mm_loadu_si128((const __m128i *)(a1 + 336));
          goto LABEL_10;
        case 6LL:
          v7 = (unsigned __int128)_mm_loadu_si128((const __m128i *)(a1 + 352));
          goto LABEL_10;
        case 7LL:
          v7 = (unsigned __int128)_mm_loadu_si128((const __m128i *)(a1 + 368));
LABEL_10:
          *v6 = v7;
          *(_QWORD *)((char *)v6 + 6) = v7 >> 48;
          break;
        case 8LL:
          v8 = _mm_loadu_si128((const __m128i *)(a1 + 384));
          *v6 = v8.m128i_i64[0];
          *(_QWORD *)((char *)v6 + 6) = *(unsigned __int128 *)&v8 >> 48;
          break;
        default:
          return v9 - __readfsqword(0x28u);
      }
    }
    else if ( a2 == 2 )
    {
      v5 = *a4;
      switch ( a3 )
      {
        case 0LL:
          *(_QWORD *)(a1 + 256) = *v5;
          *(_QWORD *)(a1 + 262) = *(_QWORD *)((char *)v5 + 6);
          break;
        case 1LL:
          *(_QWORD *)(a1 + 272) = *v5;
          *(_QWORD *)(a1 + 278) = *(_QWORD *)((char *)v5 + 6);
          break;
        case 2LL:
          *(_QWORD *)(a1 + 288) = *v5;
          *(_QWORD *)(a1 + 294) = *(_QWORD *)((char *)v5 + 6);
          break;
        case 3LL:
          *(_QWORD *)(a1 + 304) = *v5;
          *(_QWORD *)(a1 + 310) = *(_QWORD *)((char *)v5 + 6);
          break;
        case 4LL:
          *(_QWORD *)(a1 + 320) = *v5;
          *(_QWORD *)(a1 + 326) = *(_QWORD *)((char *)v5 + 6);
          break;
        case 5LL:
          *(_QWORD *)(a1 + 336) = *v5;
          *(_QWORD *)(a1 + 342) = *(_QWORD *)((char *)v5 + 6);
          break;
        case 6LL:
          *(_QWORD *)(a1 + 352) = *v5;
          *(_QWORD *)(a1 + 358) = *(_QWORD *)((char *)v5 + 6);
          break;
        case 7LL:
          *(_QWORD *)(a1 + 368) = *v5;
          *(_QWORD *)(a1 + 374) = *(_QWORD *)((char *)v5 + 6);
          break;
        case 8LL:
          *(_QWORD *)(a1 + 384) = *v5;
          *(_QWORD *)(a1 + 390) = *(_QWORD *)((char *)v5 + 6);
          break;
        default:
          return v9 - __readfsqword(0x28u);
      }
    }
    return v9 - __readfsqword(0x28u);
  }
  if ( (_DWORD)a3 )
    return v9 - __readfsqword(0x28u);
  return sub_2EEC0((QT::QWidget *)a1);
}

